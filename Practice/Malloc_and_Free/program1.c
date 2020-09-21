#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int* p2 = malloc(5 * sizeof(int));
    p2[0] = 42;
    p2[1] = 100;
    p2[2] = 17;
    p2[3] = 99;
    p2[4] = 1024;

    for (int i = 0; i <5; i++)
    {
        printf("%d ", p2[i]);
    }
    
    printf("\n");

    free(p2);
}