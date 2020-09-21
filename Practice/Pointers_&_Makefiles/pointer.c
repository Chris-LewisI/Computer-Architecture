#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int x = 5;
    //initializing pointer (*) and setting it equal to address (&) of x
    int *p = &x;
    
    //printing x
    printf("x: %d\n", x);
    //printing x by dereferencing pointer p
    printf("*p: %d\n", *p);

    //changing x's value by using the pointer
    *p = 4;
    printf("new *p: %d\n", *p);
    printf("new x: %d\n", x);
    
    return 0;
}