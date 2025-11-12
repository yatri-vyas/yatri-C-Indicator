
#include <stdio.h>

int main()
{
    int size;

    printf("Enter size :");
    scanf("%d", &size);

    int arr[size];
    int *p[size];

    printf("Enter Array Elements : \n");
    for (int i = 0; i < size; i++)
    {
        printf("enter arr[%d] : ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        p[i] = &arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        *p[i] = *p[i] * *p[i];
    }

    int length;

    length = sizeof arr  / sizeof arr[0];
   
     for (int i = 0; i <= length / 2 - 1; i++)
    {
        int j = length-i-1;
        char temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    printf("\n Reversed Element of Array :\n");   
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }

    return 0;
}
