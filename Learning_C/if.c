#include <stdio.h>

int main() 
{
    //if statement for choice
    int a;

    printf("type an integer: ");
    scanf("%d",&a);
    if(a>10){
        printf("You typed %d.\n", a);
        printf("%d is greater than 10.\n");
    }
    else{
        printf("You typed %d.\n", a);
        printf("%d is less than 10,\n");
    }


    // switch cases for choice
    char b;

    printf("Your choice (A,B,C): ");
    scanf("%c",&b);
    switch(b)
    {
        case 'A':
        case 'a':
            puts("You picked A.\n");
            break;
        case 'B':
        case 'b':
            puts("You picked B.\n");
            break;
        case 'C':
        case 'c':
            puts("You picked C.\n");
            break;
        default:
            puts("Not a valid choice.\n");
    }

    return(0);
}
