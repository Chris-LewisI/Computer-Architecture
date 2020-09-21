#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void doubleValue(int x)
{
    x = (x * 2);
}

void tripleValue(int *x)
{
    *x = (*x * 3);
}

int main(int argc, char* argv[])
{
    //non-pointer method
    int y = 10;
    (doubleValue(y));
    printf("%d\n", y);
    
    //pointer method
    int z = 10;
    tripleValue(&z);
    printf("%d\n", z);
}