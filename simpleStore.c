#include <stdio.h>

void menu() {
    printf("What would you like to purchase?\n");
    printf("1. Tomatoes\n");
    printf("2. Flour\n");
    printf("3. Yogurt\n");
    printf("4. Ice Cream Cones\n");
    printf("5. Candy\n");
    printf("6. Lollypops\n");
}

int main() {
    float tomatoPrice = 4.5, flourPrice = 1.8, yogurtPrice = 0.5, conePrice = 0.6, candyPrice = 1.5, lollypopPrice = 0.15, totalPrice = 0.0;
    int select = 0;
    do {
        menu();
        scanf("%d", &select);
        switch (select) {
            case 1: 
                {
                float weight = 0.0;
                printf("\nHow many kilos tomatoes would you like to purchase?\n");
                scanf("%f", &weight);
                totalPrice = totalPrice + (weight * tomatoPrice);
                }
                break;
            case 2: 
                {
                float weight = 0.0;
                printf("\nHow many kilos of flour would you like to purchase?\n");
                scanf("%f", &weight);
                totalPrice = totalPrice + (weight * flourPrice);
                }
                break;
            case 3: 
                {
                int pcs = 0;
                printf("\nHow many yogurt cans would you like to purchase?\n");
                scanf("%d", &pcs);
                totalPrice = totalPrice + (pcs * yogurtPrice);
                }
                break;
            case 4: 
                {
                int pcs = 0;
                printf("\nHow many ice cream cones would you like to purchase?\n");
                scanf("%d", &pcs);
                totalPrice = totalPrice + (pcs * conePrice);
                }
                break;
            case 5: 
                {
                float weight = 0.0;
                printf("\nHow many kilos of candy would you like to purchase?\n");
                scanf("%f", &weight);
                totalPrice = totalPrice + (weight * candyPrice);
                }
                break;
            case 6:
                {
                int pcs = 0;
                printf("\nHow many kilos of lollypops would you like to purchase?\n");
                scanf("%d", &pcs);
                totalPrice = totalPrice + (pcs * lollypopPrice);
                }
                break;
            default: 
                {
                printf("\nInvalid choice!\n");
                }
                break;
        }
        printf("\nWould you like to buy something else?\n0.No\n1.Yes\n");
        scanf("%d", &select);
    } while(select);
    printf("Your total price is %.2f. Hope you have a nice day!", totalPrice);
    return 0;
}
