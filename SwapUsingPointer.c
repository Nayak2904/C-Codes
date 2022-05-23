#include<stdio.h>
void main(){
    int x,y,*a,*b,temp;
    printf("Enter any two number:\n");
    scanf("%d %d", &x , &y);

    printf("Before swapping\n x=%d \n y=%d", x,y);
    
    a=&x;
    b=&y;

    temp=*a;
    *a=*b;
    *b=temp;

    printf("\nAfter swapping\n x=%d \n y=%d \n", x,y);

}