#include <stdio.h>
#include <math.h>
#define M_PI 3.14

int main()
{
    float radius;

    printf("Enter radius of circle\n");
    scanf("%f", &radius);

    printf("Area of circle is %f \n", (M_PI * radius * radius));

    return 0;
}
