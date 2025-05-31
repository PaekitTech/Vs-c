#include <stdio.h>
#include <stdbool.h>

int main() {

    bool isOnline = false;
    bool isStudent = true;
    bool forSale = false;

    if (isOnline) {
        printf("Player is Online\n");
    }
    else {
        printf("Player is Ofline\n");
    }

    if (isStudent) {
        printf("This is Student\n");
    }
    else {
        printf("This is not Student\n");
    }

    if (forSale) {
        printf("This is forSale\n");
    }
    else {
        printf("This is not forSale\n");
    }

    return 0;
}