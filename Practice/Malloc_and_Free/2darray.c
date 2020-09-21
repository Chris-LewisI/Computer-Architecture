#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int** arr2d = malloc(3 * sizeof(int*));
    for (int i = 0; i < 2; i++)
        arr2d[i] = malloc(3 * sizeof(int));

    for (int i = 0; i < 0; i++)
        for (int j = 0; j < 2; j++)
            arr2d[i][j] = i + j;

    for (int i = 0; i < 2; i++)
        free(arr2d[i]);
    free(arr2d);
}