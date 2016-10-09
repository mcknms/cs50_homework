#include <stdio.h>
#include <cs50.h>

int main () {
    int minutes;
    int bottles;
    printf("minutes: ");
    minutes = GetInt();
    bottles = minutes * 12;
    printf("bottles %d", bottles);
}
