#include<stdio.h>
int main()
{
    int a, b;
    int op;
    printf("1.Addition\n 2.Substraction\n 3.Multiplication\n 4.Division\n");
    printf("Enter the values of a & b:");
    scanf("%d %d", &a, &b);
    printf("Enter your choice:");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        printf("Sum of %d and %d is:%d",a,b,a+b); /* code */
        break;
    case 2:
        printf("Difference between %d and %d is:%d",a,b,a-b);
        break;
    case 3:
        printf("Multiplication of %d and %d is:%d", a,b,a*b);
        break;
    case 4:
        printf("Division of %d and %d is:%d", a,b,a/b);
        break;
    default:
    printf("Enter ypur choice");
        break;
    }
    return 0;
}