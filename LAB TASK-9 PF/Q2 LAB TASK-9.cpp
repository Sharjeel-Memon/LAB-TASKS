#include <stdio.h>

int main() {
    int bolts, nuts, washers;
    int total_cost;

    printf("Enter the number of bolts: ");
    scanf("%d", &bolts);
    printf("Enter the number of nuts: ");
    scanf("%d", &nuts);
    printf("Enter the number of washers: ");
    scanf("%d", &washers);

    total_cost = (bolts * 5) + (nuts * 3) + (washers * 1);

    if (nuts < bolts && washers < 2 * bolts) {
        printf("Check the Order: too few nuts and too few washers\n");
    } else if (nuts < bolts) {
        printf("Check the Order: too few nuts\n");
    } else if (washers < 2 * bolts) {
        printf("Check the Order: too few washers\n");
    } else {
        printf("Order is OK\n");
    }

    printf("Total cost (in cents): %d\n", total_cost);

    return 0;
}
