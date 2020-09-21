#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    char* s1 = "hello";
    char s2[6];
    char* s3 = "abc";
    char* s4 = "def";
    char s5[10];

    strcpy(s2, s1);
    if(strcmp(s1, s2) == 0)
    {
        printf("same\n");
    }
    else
    {
        printf("different\n");
    }
    // %zu is for unassigned variables
    printf("%zu\n", strlen(s1));
}