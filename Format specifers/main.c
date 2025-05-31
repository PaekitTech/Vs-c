#include <stdio.h>
#include <stdbool.h>

int main() {

    int age = 19;
    float price = 2.89;
    double pi = 3.323233333;
    char symbol = '!';
    char charactor[] = "Baki maybe";
    bool isOnsale = true;


    printf("I am %d years old\n", age);
    printf("The price is %f\n", price);
    printf("pi is %.20lf\n", pi);
    printf("My favorite symbol is %c\n", symbol);
    printf("My favorite charactor is %s\n", charactor);
    printf("%d\n", isOnsale);

    if (isOnsale)
    {
        printf("This is Onsale");
    }
    else
    {
        printf("This is not Onsale");
    }

    return 0;
}