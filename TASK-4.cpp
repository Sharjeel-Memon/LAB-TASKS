#include <stdio.h>

int main() {
	float Total_Amount;
	char Membershipstatus;
	printf("Enter your Total Amount of Purchase :");
	scanf("%f",&Total_Amount);
	printf("Enter your Membership Status(Y/N):");
	scanf(" %c",&Membershipstatus);
	(Total_Amount<0) ? printf("Invalid Input.Total Purchase Amount should be Positive.") : ((Total_Amount>=0 && Total_Amount <=100) && (Membershipstatus=='Y' || Membershipstatus=='y' || Membershipstatus=='N' || Membershipstatus=='n')) ? printf("Amount should be greater than 100 to be eligible for Discount.") : (Total_Amount >100 &&(Membershipstatus=='y' || Membershipstatus=='Y')) ? printf("You are eligible for Discount.") : printf("You are not eligible for discount.");
	return 0;
}