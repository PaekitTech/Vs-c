#include <stdio.h>

int main() {

    int num1 = 1;
    int num2 = 10;
    int num3 = -100;

    // add number in %_d infront d like %2d this will make space

    /* and if - in int it will not change if you add %+d in it
    but if it not it will add + infront your number */

    printf("%+5d\n", num1);
    printf("%+5d\n", num2);
    printf("%+5d\n", num3);
}