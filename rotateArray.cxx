//B:- Write a program to rotate an array:
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of an array :");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element : ", i + 1);
        scanf("%d", &arr[i]);
    }

    int r;

    printf("Enter the no. of rotations: ");
    scanf("%d", &r);

    r = r % n;

    for (int i = 0; i < r; i++)
    {
        int last = arr[n - 1];
        for (int j = n - 1; j > 0; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[0] = last;
    }

    printf("Rotated array after %d rotations is: ", r);
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
}