#include<stdio.h>
int main()
{
    int a, b, c;
    printf("\nEnter three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a>=b && a>=c)
    {
        /* code */
        printf("%d is the greatest number\n", a);

    }
    if (b>=a && b>=c)
    {
        /* code */
        printf("%d is the greatest number\n", b);
    }
    if (c>=a && c>=b)
    {
        /* code */
        printf("%d is the greatest number\n", c);
    }
    
    
    
    /* code */
    return 0;
}
