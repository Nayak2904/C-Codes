#include<stdio.h>
int main()
{
    int i,a=1, count;
    while (a<=100)
    {
        /* code */
        count = 0;
        i=2;
        while (i<=a/2)
        {
            /* code */
            if (a%i == 0)
            {
                /* code */
                count++;
                break;
            }
            i++;
            
        }
        if (count==0 && a!=1)
        {
            /* code */
            printf("%d\n",a);
        }
        a++;
        
        
    }
    
    /* code */
    return 0;
}
