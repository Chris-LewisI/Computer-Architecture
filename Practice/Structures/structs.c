#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct Plane
{
    char flightNum[7];
    int altitude;
    double longitude;
    double latitude;
    double airSpeed;
} Plane;

int main(int argc, char* argv[])
{
    Plane p1;
    p1.altitude = 30000;
    strcpy(p1.flightNum, "UAL196");
    p1.airSpeed = 500.0;

    printf("%s\n", p1.flightNum);
    printf("%f\n", p1.longitude);
    printf("%d\n", p1.altitude);

    Plane p2 = p1;

    printf("%s\n", p2.flightNum);
    printf("%f\n", p2.longitude);
    printf("%d\n", p2.altitude);

    Plane p3 = { "UAL123", 10000, 123.5, 42.3, 300.0 };
}