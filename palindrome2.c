#include<stdio.h>
int main(){
    int n, n1, rev= 0, rem;

    printf("Enter a numbe to check:");
    scanf("%d", &n);
    n1=n;

    while (n>0)
    {
        rem= n % 10;
        rev= rev *10+ rem;
        n= n / 10;
    }
    if (n1 == rev)
    {
        printf("Entered number is palindrome number\n");
    }
    else
    {
        printf("Entered number is not palindrome number");
    }
    return 0;
    
    
}