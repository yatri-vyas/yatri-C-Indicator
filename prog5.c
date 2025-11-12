#include <stdio.h>

int main()
{
    int x, y, *p, *q, *temp;

    printf("enter value for x :");
    scanf("%d", &x);

    printf("enter value for y :");
    scanf("%d", &y);

    temp = &x;
    p = &y;
    q = temp;

    printf("\n before swapping :");
    printf("\n x is : %d ", x);
    printf("\n y is : %d ", y);

    printf("\n after swapping :");
    printf("\n x is : %d ", *p);
    printf("\n y is : %d ", *q);

    return 0;
}