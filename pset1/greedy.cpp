#include <stdio.h>
#include <math.h>

int main (void) {

    #define QUARTER 25
    #define DIME 10
    #define NICKEL 5
    #define PENNY 1

    float delivery;
    int amount;
    int coins_count = 0;
    do {
    printf("O hai! How much change is owed?\n");
    scanf ("%f", &delivery);
    amount = round (delivery * 100);
    } while (delivery <=0);

    while (amount % QUARTER != amount) {
        amount -= QUARTER;
        coins_count++;
    }
    while (amount % DIME != amount) {
        amount -= DIME;
        coins_count++;
    }
    while (amount % NICKEL != amount) {
        amount -= NICKEL;
        coins_count++;
    }
    while (amount % PENNY != amount) {
        amount -= PENNY;
        coins_count++;
    }
    coins_count += amount;
    printf("%d\n", coins_count);
}
