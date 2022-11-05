#include <stdio.h>
int main()
 {   
      int num1,num2;
    printf("Hi user!!\nPlease enter a number and digit");
    scanf("%d %d", &num1,&num2);
    num1=num1*10;
    num1=num1+num2;
    printf("Number after append=%d",num1);
      return 0;
}