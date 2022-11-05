#include <stdio.h>
int main() {  
    char c;
    printf("Hi user!!\nPlease enter a character to know it's ASCII value: ");
    scanf("%c", &c);  
    printf("Thanks for the input\nASCII value of character %c = %d", c, c);
    return 0;
}