#include <stdio.h>

int main() 
{
    char password[] = "password";\
    char input[64];

    printf("The password is %s.\n",password);

    printf("Instructions: ");
    fgets(input, 64, stdin);    //gets a line of text
    puts("Thank you! Here are your instructions: ");
    puts(input);

    return(0);
}