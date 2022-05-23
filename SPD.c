#include<stdio.h>
int main()
{
    int n, n1;
    int dig, sum, pro;
    /* code */
    printf("\nEnter any integer number::");
    scanf("%d", &n);

    n1=n;

    sum=0;
    pro=1;

    while (n>0)
    {
        dig=n%10;
        sum+=dig;
        pro*=dig;
        n=n/10;
    }
    printf("\nSUM of Digits of Number [%d] : [%d].\n",n1,sum);
    printf("\nPRODUCT of digts of Number [%d] : [%d].\n ", n1,pro);
    
    
    return 0;
}
