#include<stdio.h>
int main(){
    char s[50]; printf("Enter a string : ");
    scanf("%[^\n]s", &s);
    char arr[ ] = "aeiouAEIOU";
    int count = 0;
    
    for(int i = 0; s[i] != '\0'; i++){
        for(int j = 0; arr[j] != '\0'; j++){
            if ( s[i] == arr[j]){
                count += 1;
            }
        }
    }
    
    printf("The number of vowels in '%s' : %d", s, count);
}