#include<stdio.h>
int main(){
    char s[50]; printf("Enter a string :");
    scanf("%[^\n]s", &s);
    
    for ( int i = 0; s[i] != '\0'; i++){
        if ( s[i] >= 'a' && s[i] <= 'z'){
            s[i] = s[i] - 32;
        }
    } printf("The upper cased string : ");
    printf("\n%s", s);
}