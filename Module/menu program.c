#include <stdio.h>
#include <conio.h>

int main() {
    int choose, qty;
    int total = 0;

    printf("\n 1. Pizza  \t price = 180 rs/pcs");
    printf("\n 2. Burger \t price = 100 rs/pcs");
    printf("\n 3. Dosa   \t price = 120 rs/pcs");
    printf("\n 4. Idli   \t price = 50 rs/pcs");

    printf("\n Enter your number : ");
    scanf("%d", &choose);

    switch (choose) {
        case 1:
            printf("\nPizza");
            printf("\tEnter the quantity : ");
            scanf("%d", &qty);
            total = qty * 180;
            break;

        case 2:
            printf("\nBurger");
            printf("\tEnter the quantity : ");
            scanf("%d", &qty);
            total = qty * 100;
            break;

        case 3:
            printf("\nDosa");
            printf("\tEnter the quantity : ");
            scanf("%d", &qty);
            total = qty * 120;
            break;

        case 4:
            printf("\nIdli");
            printf("\tEnter the quantity : ");
            scanf("%d", &qty);
            total = qty * 50;
            break;

        default:
            printf("\nInvalid choice!");
            return 0;
    }

    printf("\nTotal amount = %d Rs\n", total);

    getch();
    return 0;
}
