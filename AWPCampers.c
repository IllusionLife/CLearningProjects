#include <stdio.h>

int main() {
    int campersAvailable = 3, caravansAvailable = 3, rentedCampers = 0, rentedCaravans = 0, rentDays = 0;
    float priceCamper = 100.0, priceCaravan = 90.0, totalPrice = 0.0;
    unsigned char select = 0;
    printf("Hello! Welcome to AWP Campers!\n");
    printf("We currently have %d caravans and %d campers available\n", caravansAvailable, campersAvailable);
    printf("Which vehicle are you interested in?\n1.Caravans\n2.Campers\n\nEnter your selection here: ");
    scanf("%d", &select);
    while(select != 1 && select != 2) {
        printf("Invalid input. Please use a valid option.\n");
        printf("Which vehicle are you interested in?\n1.Caravans\n2.Campers\n\nEnter your selection here: ");
        scanf("%d", &select);
    }
    if (select == 1) {
        printf("\nGreat choice! How many caravans would you like to rent?\nReminder, we have %d caravans available.\n", caravansAvailable);
        scanf("%d", &rentedCaravans);
        while ((rentedCaravans > caravansAvailable) || (rentedCaravans < 0))
        {
            printf("\nInvalid input. Please use a valid option.\n");
            printf("How many caravans would you like to rent?\nReminder, we have %d caravans available.\n", caravansAvailable);
            scanf("%d", &rentedCaravans);
        }
        printf("\nSounds like a great trip. And for how many days would you like to have them rented?\n");
        scanf("%d", &rentDays);
        while (rentDays < 0)
        {
            printf("\nInvalid input. Please use a valid option.\n");
            printf("Sounds like a great trip. And for how many days would you like to have them rented?\n");
            scanf("%d", &rentDays);
        }
        printf("\nGreat! So you wish to rent %d caravans (each costing %.2fBGN per day) for %d days.\n", caravansAvailable, priceCaravan, rentDays);
        printf("In total, this will cost you %.2f BGN.\n", (caravansAvailable * priceCaravan * rentDays));
    }
    else {
        printf("Great choice! How many campers would you like to rent?\nReminder, we have %d campers available.\n", campersAvailable);
        scanf("%d", &rentedCampers);
        while ((rentedCampers > campersAvailable) || (rentedCampers < 0))
        {
            printf("Invalid input. Please use a valid option.\n");
            printf("How many campers would you like to rent?\nReminder, we have %d campers available.\n", campersAvailable);
            scanf("%d", &rentedCampers);
        }
        printf("Sounds like a great trip. And for how many days would you like to have them rented?\n");
        scanf("%d", &rentDays);
        while (rentDays < 0)
        {
            printf("Invalid input. Please use a valid option.\n");
            printf("Sounds like a great trip. And for how many days would you like to have them rented?\n");
            scanf("%d", &rentDays);
        }
        printf("Great! So you wish to rent %d campers (each costing %.2fBGN per day) for %d days.\n", campersAvailable, priceCamper, rentDays);
        printf("In total, this will cost you %.2f BGN.\n", (campersAvailable * priceCamper * rentDays));
    }

    return 0;
}
