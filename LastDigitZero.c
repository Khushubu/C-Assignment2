#include <stdio.h>
int main()
 {   
      int i,n;
    printf("Hi user!!\nPlease enter a number");
    scanf("%d", &i);
    n=i%10;//last digit
    i=i-n;
    printf("new number is = %d",i);  
      return 0;
}