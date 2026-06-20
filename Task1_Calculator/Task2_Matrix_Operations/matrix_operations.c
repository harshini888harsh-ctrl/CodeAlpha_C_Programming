#include <stdio.h>

void addMatrix(int a[10][10], int b[10][10], int r, int c)
{
    int sum[10][10];

    printf("\nMatrix Addition:\n");

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}

void multiplyMatrix(int a[10][10], int b[10][10], int r, int c)
{
    int result[10][10];

    printf("\nMatrix Multiplication:\n");

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            result[i][j] = 0;

            for(int k = 0; k < c; k++)
            {
                result[i][j] += a[i][k] * b[k][j];
            }

            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

void transposeMatrix(int a[10][10], int r, int c)
{
    printf("\nTranspose of First Matrix:\n");

    for(int i = 0; i < c; i++)
    {
        for(int j = 0; j < r; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
}

int main()
{
    int a[10][10], b[10][10];
    int r, c;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("\nEnter First Matrix:\n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter Second Matrix:\n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    addMatrix(a, b, r, c);
    multiplyMatrix(a, b, r, c);
    transposeMatrix(a, r, c);

    return 0;
}
