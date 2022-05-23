#include <stdio.h> 
int main() { 
   int number; 
   float sum=0.0, number1, number2; 
   clrscr(); 
   printf("\n Enter the value of number: "); 
   scanf ("%d", &number); 
   for(number2=1.0;number2<=number;number2++) { 
      number1=1/number2; 
      sum = sum +number1; 
    } 
    printf("\n The sum of series 1/1 + 1/2 +... + l/%d = %f",number,sum); 
    return 0; 
 }