#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    char cMessage[] = "Loop Test:\n";
    printf("%s", cMessage);
    
    int i, count;

    count = atoi(argv[1]);
    /*changes the strong argument into an int argument */
       for (i = 0; i < count; i++) {
         /* %d informs the print function that we are expecting an int */
         /* \n is to create a new line */
           printf("Hello %d\n", i);
       }
}