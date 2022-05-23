#include <stdio.h>
void main(){
    int m, n, c, d, n1[100] [100] ,n2[100] [100] ,sum[100] [100];
    printf("Enter the number of rows and columns of matrix\n");
    scanf("%d %d", &m, &n);

    printf("Enter the first matrix\n");
    for ( c = 0; c < m ; c++)
    {
        for ( d = 0; d < n ; d++)
        {
            scanf("%d", &n1[c][d]);
        }
        
    }
    printf("Enter the second matrix\n");
    for ( c = 0; c < m; c++)
    {
        for ( d = 0; d < n; d++)
        {
            scanf("%d", &n2[c][d]);
        }
        
    }
    printf("Sum of entered matrix is:\n");

    for ( c = 0; c < m ; c++)
    {
        for ( d = 0; d < n ; d++)
        {
            sum[c][d]= n1[c][d] + n2[c][d];
            printf("%d\t",sum[c][d]);

        }
        printf("\n");
    }
    
    
    
}
/*#include <stdio.h>
 
int main()
{
   int m, n, c, d, first[10][10], second[10][10], sum[10][10];
 
   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &m, &n);
   printf("Enter the elements of first matrix\n");
 
   for (c = 0; c < m; c++)
      for (d = 0; d < n; d++)
         scanf("%d", &first[c][d]);
 
   printf("Enter the elements of second matrix\n");
 
   for (c = 0; c < m; c++)
      for (d = 0 ; d < n; d++)
         scanf("%d", &second[c][d]);
   
   printf("Sum of entered matrices:-\n");
   
   for (c = 0; c < m; c++) {
      for (d = 0 ; d < n; d++) {
         sum[c][d] = first[c][d] + second[c][d];
         printf("%d\t", sum[c][d]);
      }
      printf("\n");
   }
 
   return 0;
}*/