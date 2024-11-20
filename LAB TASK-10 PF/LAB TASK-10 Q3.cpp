#include <stdio.h>

struct Car {
    char make[50];
    char model[50];
    int year;
    float price;
    float mileage;
};

int main() {
    struct Car cars[5];
    int numCars = 0;
    
    while (1) {
        int choice;
        printf("\n1. Add Car\n2. Display Cars\n3. Exit\nChoose an option: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter car make: ");
            scanf("%s", cars[numCars].make);
            printf("Enter car model: ");
            scanf("%s", cars[numCars].model);
            printf("Enter car year: ");
            scanf("%d", &cars[numCars].year);
            printf("Enter car price: ");
            scanf("%f", &cars[numCars].price);
            printf("Enter car mileage: ");
            scanf("%f", &cars[numCars].mileage);
            numCars++;
        } else if (choice == 2) {
            for (int i = 0; i < numCars; i++) {
                printf("\nCar %d: %s %s (%d)\n", i + 1, cars[i].make, cars[i].model, cars[i].year);
                printf("Price: %.2f, Mileage: %.2f\n", cars[i].price, cars[i].mileage);
            }
        } else if (choice == 3) {
            break;
        }
    }

    return 0;
}
