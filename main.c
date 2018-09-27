#include <stdio.h>
#include <stdlib.h>

int main()
    {
    int isPlayerAlive = 1;
    int currentHP = 5;

    while(isPlayerAlive == 1)
    {
        //Prompt the user if they want to attack.
        printf("Attack player? Y or N:  ");

        // Get user input from the console.
        char attackOption;
        scanf("%c", &attackOption);


    switch(attackOption)
    {
    case 'Y':
    case 'y':
        currentHP--;
        printf("Player takes 1 damage. \nRemaining HP: %d\n", currentHP);
        break;

    case 'N':
    case 'n':
        printf("You passed! Player takes 0 damage.\nRemaining HP: %d\n", currentHP);
        break;
    }

    if (currentHP == 0)
    {
        isPlayerAlive = 0;
        printf("Player is dead. RIP x_x");
    }

    }

    return 0;
}
