#include <stdio.h>
int main()
{
    int r1, c1, r2, c2;
    printf("Enter first array rows : ");
    scanf("%d", &r1);
    printf("Enter first array columns : ");
    scanf("%d", &c1);
    int arr1[r1][c1];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("Enter a%d%d : ", 1 + i, 1 + j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("\n\n");
    printf("Enter second array rows : ");
    scanf("%d", &r2);
    printf("Enter second array columns : ");
    scanf("%d", &c2);
    int arr2[r2][c2];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            printf("Enter a%d%d : ", 1 + i, 1 + j);
            scanf("%d", &arr2[i][j]);
        }
    }
    int arr3[r1][c2];
    if (c1 != r2)
    {
        printf("Multiplication is not possible..! \n row1 is not equal to column2..!");
    }
    else
    {
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                int sum = 0;
                for (int k = 0; k < c1; k++)
                {
                    sum += arr1[i][k] * arr2[k][j];
                }

                arr3[i][j] = sum;
            }
        }
    }
    for (int i = 0; i < r1; i++)
    {
        printf("|  ");
        for (int j = 0; j < c2; j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf(" | \n");
    }
}