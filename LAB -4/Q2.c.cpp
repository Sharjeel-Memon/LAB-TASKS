#include <stdio.h>

int main() {
	float Total_bill,bill,Units;
	float surcharge =0.15;
	printf("Enter the amount of units charges used:");
	scanf("%f",&Units);
	if(Units >=0){
	if (Units <=30) {
	bill= Units*0.60;
	Total_bill = bill + surcharge*bill;
	printf("Total Electricity Bill is :%.2f",Total_bill);
}
    else if(Units <=110){
    	bill=30*0.60 + (Units-30)*0.85;
    	Total_bill = bill +surcharge*bill;
	printf("Total Electricity Bill is :%.2f",Total_bill);
	}
	else if(Units<=210 ) {
		bill=30*0.60 + (80)*0.85 +(Units-110)*1.30;
		Total_bill = bill + surcharge*bill;
	printf("Total Electricity Bill is :%.2f",Total_bill);
	}
	else {
		bill=30*0.60 + (80)*0.85 +(100)*1.30 +(Units-210)*1.60;
		Total_bill = bill + surcharge*bill;
		printf("Total Electricity Bill is :%.2f",Total_bill);
	}
}
else {
	printf("Invalid Input.Units cant be in Negative.");
}
return 0;
}
		
	
