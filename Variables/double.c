#include <stdio.h>

int main() {

    double pi = 3.1231231232;
    double a = 2.312312333;

    /*
    inside %._lf you can change this _ to number
    that you want to show how many number in .
    */

    printf("pi inside is %.10lf\n", pi);
    printf("a inside is %.10lf", a);

    return 0;
}