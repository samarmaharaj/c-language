#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of an array :");
    scanf("%d", &n);
    int arr[n];
    for( int i = 0; i < n; i++){
        printf("Enter %d element : ", i + 1);
        scanf("%d", &arr[i]);
    }
    //int n = sizeof(arr)/sizeof(arr[0]);
    for( int i = 0; i < n; i++){
        printf("%d", arr[i]);
    }
    
    if (n%2 == 0){
       for( int i = 0; i < n/2; i++){
           arr[i] = arr[i] + arr[n-i-1];
           arr[n-1-i] = arr[i] - arr[n-1-i];
           arr[i] = arr[i] - arr[n-1-i];
            } 
    } else {
        for( int i = 0; i < (n-1)/2; i++){
           arr[i] = arr[i] + arr[n-i-1];
           arr[n-1-i] = arr[i] - arr[n-1-i];
           arr[i] = arr[i] - arr[n-1-i];
            }    
    }
    printf("\n");
    for( int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}