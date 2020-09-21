#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    FILE* fp = fopen("foo.dat", "r");

    while (1) {
        int x, y;
        int n = fscanf(fp, "%d\t%d", &x, &y);
        if (n != 2)
            break;
        printf("%d\n", x + y);
    }
    fclose(fp);
}