#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int choixMenu;

    printf("=== Menu ===\n");
    printf("1. Royal Cheese\n");
    printf("2. Mc Deluxe\n");
    printf("3. Mc Bacon\n");
    printf("4. Big Mac\n");
    printf("Votre choix ? ");
    scanf("%d", &choixMenu);

    printf("\n");

    switch (choixMenu)
    {
    case 1:
        printf("You have choose : Royal Cheese.\n\n");
        break;
    case 2:
        printf("You have choose : Mc Deluxe.\n\n");
        break;
    case 3:
        printf("You have choose : Mc Bacon.\n\n");
        break;
    case 4:
        printf("You have choose : Big Mac.\n\n");
        break;
    default:
        printf("It's not in the list !\n\n");
        break;
    }


    system("pause");

    return 0;
}
