#include <stdio.h>
#include <string.h>

struct TravelPackage {
    char name[50];
    char destination[50];
    int duration;
    float cost;
    int seatsAvailable;
};

int main() {
    struct TravelPackage packages[5];
    int numPackages = 0;
    char packageName[50];
    
    while (1) {
        int choice;
        printf("\n1. Add Package\n2. Display Packages\n3. Book Package\n4. Exit\nChoose an option: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter package name: ");
            scanf("%s", packages[numPackages].name);
            printf("Enter destination: ");
            scanf("%s", packages[numPackages].destination);
            printf("Enter duration: ");
            scanf("%d", &packages[numPackages].duration);
            printf("Enter cost: ");
            scanf("%f", &packages[numPackages].cost);
            printf("Enter available seats: ");
            scanf("%d", &packages[numPackages].seatsAvailable);
            numPackages++;
        } else if (choice == 2) {
            for (int i = 0; i < numPackages; i++) {
                printf("\nPackage: %s\nDestination: %s\nDuration: %d days\nCost: %.2f\nSeats Available: %d\n", packages[i].name, packages[i].destination, packages[i].duration, packages[i].cost, packages[i].seatsAvailable);
            }
        } else if (choice == 3) {
            printf("Enter package name to book: ");
            scanf("%s", packageName);
            int booked = 0;
            for (int i = 0; i < numPackages; i++) {
                if (strcmp(packages[i].name, packageName) == 0 && packages[i].seatsAvailable > 0) {
                    printf("Booking %s for you.\n", packages[i].name);
                    packages[i].seatsAvailable--;
                    booked = 1;
                    break;
                }
            }
            if (!booked) {
                printf("Sorry, no available seats for the package %s.\n", packageName);
            }
        } else if (choice == 4) {
            break;
        }
    }

    return 0;
}
