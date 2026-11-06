#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    double radius;
    double surfaceArea;
    double PI= 3.142;

    printf("Enter the radius of the sphere: ");
    scanf("%lf", &radius);
    if (radius >= 0) {
        surfaceArea = 4 * PI * radius * radius;
        printf("result: %.2lf\n", surfaceArea);
    } else {
        printf("Error! \n");
    }
    return 0;
}
