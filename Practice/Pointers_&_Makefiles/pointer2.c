#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int slices = 20;
    //asterisk here is used to create the pointer (NOT PART OF NAME)
    int *p = &slices;

    printf("Slices: %d\n", slices);
    //asterisk here is the indirection operator (AGAIN NOT PART OF NAME)
    printf("Slices (through pointer): %d\n", *p);

    slices = 21; //change values directly through integer
    printf("Slices: %d\n", slices);
    printf("Slices (through pointer): %d\n", *p);

    *p = 25; //changing value using indirection operator and pointer
    printf("Slices: %d\n", slices);
    printf("Slices (through pointer): %d\n", *p);

    slices++; //increment with variable name
    (*p)++; //increment with indirection operator and pointer (MUST be in () because increment operator takes precedence over indirection operator so it'll just mess things up (PEMDAS))

    return 0;
}