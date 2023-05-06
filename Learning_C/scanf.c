#include <stdio.h>

int main()
{
    int x;
    float y;
    char z;

    printf("Type an integer: ");
    scanf("%d",&x);  //this is how you get user input!
    printf("Integer %d\n",x);

    printf("Type any number: ");
    scanf("%f",&y);  //this is how you get user input!
    printf("Integer %f\n",y);

    printf("Type a character: ");
    scanf("%c",&z);  //this is how you get user input!
    printf("Character %c\n",z);

    return(0);
}