#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    char department[50];
    float salary;
};

void displayEmployeeData(struct Employee employees[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEmployee ID: %d\n", employees[i].id);
        printf("Name: %s\n", employees[i].name);
        printf("Department: %s\n", employees[i].department);
        printf("Salary: %.2f\n", employees[i].salary);
    }
}

int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &employees[i].id);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Department: ");
        scanf(" %s", employees[i].department);
        printf("Salary: ");
        scanf(" %f", &employees[i].salary);
    }

    printf("\nEmployee Details:\n");
    displayEmployeeData(employees, n);

    return 0;
}
