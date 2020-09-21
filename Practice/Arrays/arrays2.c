#include <stdio.h>
#include <stdlib.h>

void printArray(int* arr, int arrLength)
{
    for (int i = 0; i < arrLength; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(int argc, char* argv[])
{
    int numbers[] = {3, 7, 11, 4, -2};
    int numbersLength = sizeof(numbers)/sizeof(numbers[0]);

    // "sizeof" gives the size of the array or variable in bytes
    // if we take the size of the array and divide it by the size of one item in the array
    // we are left with the number of items in the array!
    printf("Array Length: %lu\n", sizeof(numbers)/sizeof(numbers[0]));
    printArray(numbers, numbersLength);
}