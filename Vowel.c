#include<stdio.h>
void main(){
    char c;
    int uppercase, lowercase;

    printf("Enter an alphabet: \n");
    scanf("%c", &c);
    
    uppercase= (c=='A' || c=='E' || c=='I' || c=='O' || c=='U');
    lowercase= (c == 'a' || c=='e' || c=='i' || c=='o' || c=='u');

    if (uppercase || lowercase)
    {
        printf("%c is a vowel");
    }
    else
    {
        printf("%c is a consonent");
    }
    
}