#include <stdio.h>
#include <string.h>

int main() {

    char noun[50] = "";
    char verb[50] = "";
    char conversation1[50] = "";
    char conversation2[50] = "";
    char conversation3[50] = "";

    printf("Enter conversation1 : ");
    fgets(conversation1, sizeof(conversation1), stdin);
    conversation1[strlen(conversation1) - 1] = '\0';

    printf("Enter noun : ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1] = '\0';

    printf("Enter conversation2 : ");
    fgets(conversation2, sizeof(conversation2), stdin);
    conversation2[strlen(conversation2) - 1] = '\0';

    printf("Enter verb + ing : ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] = '\0';

    printf("Enter conversation3 : ");
    fgets(conversation3, sizeof(conversation3), stdin);
    conversation3[strlen(conversation3) - 1] = '\0';

    printf("\nMy name is %s.\n",noun);
    printf("Im like to stay home because im %s.\n",conversation3);
    printf("when i go to shcool everyone call me %s.\n",conversation2);
    printf("That make me %s.\n",verb);
    printf("then i start train myself and make me %s and glow up.\n",conversation1);

    /*
    ::: perfect story :::

    stronger
    player
    ugly
    crying
    introvert
    */

    return 0;
}