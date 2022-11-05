#include<stdio.h>
int main()
{
      int num1,num2,temp;
    printf("Enter 2 no's\n");
    scanf("%d%d",&num1,&num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
     printf("Values after swapping of a=%d and b=%d",num1,num2);
    return 0;
}