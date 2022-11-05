#include<stdio.h>
int main()
{
    //add it in another variable and remove old value 
    int number,sum;
    printf("Enter a three digit no\n");
    scanf("%d",&number);
    sum=number%10; //Take out one digit one by one with help of % operator
    number=number/10;//update entered value with help of / operator
    sum=(number%10)+sum;
    sum=(number/10)+sum;
    printf("Sum of three digits=%d",sum);
    return 0;
}