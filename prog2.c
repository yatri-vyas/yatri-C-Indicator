//chain of pointer 

#include <stdio.h>

int main()
{
    int a, *p, **p1, ***p2;

    printf("enter a : ");
    scanf("%d", &a);

    p = &a;
    p1 = &p;
    p2 = &p1;

    printf("\n a is : %d ",a);
    printf("\n a is : %d ",*p);
    printf("\n a is : %d ",**p1);
    printf("\n a is : %d ",***p2);

    return 0;
}