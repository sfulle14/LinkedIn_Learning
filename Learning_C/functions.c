#include <stdio.h>

void blorf(void);
void repeat(int count);

int main()
{
    //puts("The main() function always runs first.");
    //blorf();

    int a,b;

    a=1;
    b=5;

    puts("At first the raven was like:");
    repeat(a);
    puts("But then he was all:");
    repeat(b);

    return(0);
}

void repeat(int count){
    int x;

    for(x=0; x<count; x++){
        puts("Nevermore!");
    }
}

void blorf(void){
    puts("The blorf() function runs when it's called.");
}