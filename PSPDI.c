#include<stdio.h>
int main()
{
    /* code */
    int n,n1;
    int dig, sum, pro;

    printf("\n Enter the integer number::");
    scanf("%d", &n);

    n1=n;
    //calculation sum and product
    sum=0;
    pro=1 ;
    while (n>0)
    {
        /* code */
        dig=n%10; //get digit
        sum+=dig;
        pro*=dig;
        n=n/10;
    }
    printf("\n SUM of the Digits of Number [%d] : [%d].\n", n1,sum);
    printf("\nPRODUCT of digits of number [%d] : [%d].\n ",n1,pro );

       
    return 0;
}
