#include<stdio.h>
int main()
{
    int number,u;
    printf("Enter a no\n");
    scanf("%d",&number);
    u=number%10;
    printf("Unit digit of given number is :%d",u);
    return 0;
}