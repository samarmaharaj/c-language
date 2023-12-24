#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp;
    char ch;
    int nol=0; int nota = 0; int nob = 0; int noc = 0;
    
    fp = fopen("sumOfDigitRecurse.cxx", "r");
    if ( fp == NULL){
        puts("Cannota open the file");
        exit(1);
    }
    while(1){
        ch = fgetc(fp);
        if ( ch == EOF ){
             break;
        }
        noc++;
        if ( ch == ' '){
            nob++;
        }
        if ( ch == '\n'){
            nol++;
        }
        if ( ch == '\t'){
            nota++;
        }
        
    }
    
    fclose(fp);
    printf("Number of Characters = %d\n", noc);
    printf("Number of Blanks = %d\n", nob);
    printf("Number of Tabs = %d\n", nota);
    printf("Number of lines = %d\n", nol);
    return 0;
}
