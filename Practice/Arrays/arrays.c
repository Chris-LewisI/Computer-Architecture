#include <stdio.h>
#include <stdlib.h>

int *bogus;

void foo(int seqItems[], int item) {
    seqItems[1] = 5;
    printf("item in foo 1: %d\n", item);
    item = 5;
    printf("item in foo 2: %d\n", item);
    bogus = &item;    
}

int main(int argc, char* argv[])
{
    int bunchOfInts[10];
    bunchOfInts[0] = 0;
    bunchOfInts[1] = 4;

    foo(bunchOfInts, bunchOfInts[1]);

    printf("%d, %d\n", bunchOfInts[0], bunchOfInts[1]);
    printf("%d\n", *bogus);
}