#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter two number to swap: ");
    scanf("%d %d", &a,&b);
    
    c=a;
    a=b;
    b=c;
    printf("Number after swapping is: %d", a);
    printf("%d", b);
    return 0;
}