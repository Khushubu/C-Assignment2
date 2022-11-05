#include <stdio.h>
int main()
 {   
      int number,r,temp;
    printf("Enter a three digit no\n");
    scanf("%d",&number);
    r=number%10;//store unit digit number using / operator
    temp=number/10;//remove last digit using % operator
    number=(r*100)+temp;
    printf("Number after rotation = %d",number);
    return 0;
}