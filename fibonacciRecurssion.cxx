#include<stdio.h>
 int fibo(int n){
        int num1 = 0;
        int num2 = 1;
        if ( n == 1){
            return num1;
        } else if ( n == 2){
            return num2;
        } else if ( n > 2 ){
            return fibo(n-1) + fibo(n-2);
        } else {
            printf("Entered invalid value.");
        }
    }
    
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
   
   /* for( int i = 1; i <= n; i++){
        printf("%d\n", fibo(i));
    }*/
    
}
