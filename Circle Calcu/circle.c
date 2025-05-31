#include <stdio.h>
#include <math.h>

int main() {

    //formula calcu program

    double area = 0.0;
    double radius = 0.0;
    double surfacearea = 0.0;
    double volume = 0.0;
    double diameter = 0.0;
    double circumference = 0.0;
    const double pi = 3.14159;
    
    printf("Enter radius : ", radius);
    scanf("%lf", &radius);

    area = pi * pow(radius, 2);
    surfacearea = 4 * pi * pow(radius, 2);
    volume = (4 / 3) * pi * pow(radius, 3);
    diameter = 2 * radius;
    circumference = 2 * pi * radius;

    
    printf("Area : %.3lf\n", area);
    printf("SurfaceArea : %.3lf\n", surfacearea);
    printf("Volume : %.3lf\n", surfacearea);
    printf("Diameter : %.3lf\n", diameter);
    printf("Circumference : %.3lf\n", circumference);

    return 0;
}