#include <stdio.h>
int main()
 {   
      int number;
    printf("Enter a number \n");
    scanf("%d",&number);
    (number & 1) ? printf("odd") : printf("Even");
    return 0;
}