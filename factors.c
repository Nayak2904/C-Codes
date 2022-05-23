#include<stdio.h>
int main()
{
    /* code */
    int num, i;

    printf("Enter a positive integer:-\n");
    scanf("%d", &num);
    printf("Factors of %d are:-\n", num);
    
    for ( i = 1; i <= num; ++i)
    {
        /* code */
        if (num % 1 == 0)
        {
            /* code */
            printf("%d\n", i);
        }
        
    }

    
    
    return 0;
}
