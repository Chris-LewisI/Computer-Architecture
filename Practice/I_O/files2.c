#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    FILE* fp = fopen("foo.dat", "r");
    FILE* fout = fopen("results.dat", "w");

    while (1) {
        int x, y;
        int n = fscanf(fp, "%d\t%d", &x, &y);
        if (n != 2)
            break;
        fprintf(fout, "%d\n", x + y);
    }
    fclose(fp);
    fclose(fout);
}