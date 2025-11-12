#include <stdio.h>

void cube(int row , int col)
{
    int arr[row][col];
    int *ptr[row][col];

    printf("\n Elements of array :\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("array[%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // address of elements in array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            ptr[i][j] = &arr[i][j];
        }
    }

    printf("\n elemant's cube is : \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", *ptr[i][j] * *ptr[i][j] * *ptr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int row, col;

    printf("Enter the row of an array : ");
    scanf("%d", &row);
    printf("Enter the col of an array : ");
    scanf("%d", &col);

    cube(row , col);

    return 0;
}