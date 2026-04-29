#include <stdio.h>

int color;
int choose;

int main(){

    printf("=== Color Favourite, Your Choose ===\n");
    printf("Available Colour:" "\n1. Red" "\n2. Green" "\n3. Blue" "\n0. Exit\n");
    printf("Choose your favourite color: ");
    scanf("%d", &choose);

    switch(choose){
        case 1:
            printf("You have chosen Red as your favourite color.\n");
            break;
        case 2:
            printf("You have chosen Green as your favourite color.\n");
            break;
        case 3:
            printf("You have chosen Blue as your favourite color.\n");
            break;
        case 0:
            printf("Exiting...\n");
            break;
        default:
            printf("Please choose a valid color from the list.\n");
    }
    return 0;
}