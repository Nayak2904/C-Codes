#include<stdio.h>
void main(){
    int i, n, sum=0;
    printf("Enter an integervalue:\n");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("Sum of first %d natural number is= %d \n", n, sum);
    
}