#include <stdio.h>

int sum(int *p, int *q)
{
    return *p + *q;
}

int main()
{
    int a, b;

    printf("Enter a : ");
    scanf("%d", &a);

    printf("Enter b : ");
    scanf("%d", &b);

    printf("sum of a and b is: %d", sum(&a, &b));

    return 0;
}