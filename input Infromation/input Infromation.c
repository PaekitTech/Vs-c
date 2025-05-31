#include <stdio.h>
#include <string.h>

int main() {

    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[40] = "";
    char fullname[30] = "";

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your gpa: ");
    scanf("%f", &gpa);

    printf("Enter your grade: ");
    scanf(" %c", &grade); // this line has problem we need to space infront %c because it will skip this line

    printf("Enter your name: ");
    scanf(" %s", &name);

    getchar();
    printf("Enter your full name: ");
    fgets(fullname, sizeof(fullname), stdin);
    fullname[strlen(fullname) -1] = '\0';

    printf("%s\n", fullname);
    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);
    printf("%s\n", name);

    return 0;
}