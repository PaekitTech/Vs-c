#include <stdio.h>
#include <string.h>

int main() {

    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$'; 
    float total = 0.0f;

    printf("What would u buy? : ");
    fgets(item ,sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("What price per quantity? : ");
    scanf("%f", &price);

    printf("How many would you buy? : ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("You have ordered : %d %s \n", quantity, item);
    printf("price : %c %.3f", currency, total);
    
    return 0;
}