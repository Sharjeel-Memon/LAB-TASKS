#include <stdio.h>

int main() {
	float Total_Amount;
	char Membershipstatus;
	printf("Enter your Total Amount of Purchase :");
	scanf("%f",&Total_Amount);
	(Total_Amount<0) ? printf("Invalid Input. Total Purchase Amount should be positive.\n") : printf("Enter your Membership Status(Y/N):");scanf(" %c",&Membershipstatus); (Membershipstatus!='N' || Membershipstatus!='n' || Membershipstatus!='Y' || Membershipstatus!='y' ) ? printf("Invalid Input.It should be either Y/y or N/n.") : (Total_Amount >=0 && Total_Amount <100) ? printf("You are not eligible for discount.") : (Total_Amount >=100 &&(Membershipstatus=='Y' || Membershipstatus=='y')) ? printf("You are eligible for discount. ") : printf("You are not eligible for discount.");
	return 0;
}