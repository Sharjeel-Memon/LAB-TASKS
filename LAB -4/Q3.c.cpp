#include <stdio.h>

int main(){
	float Original_Total_Amount,Total_Amount_Saved,Discount,Final_Total_Amount;
	printf("Enter the Original Total cost of the Items:");
	scanf("%f",&Original_Total_Amount);
	if(Original_Total_Amount >=0) {
	if (Original_Total_Amount <=1500) {
		Discount=0.07;
		Total_Amount_Saved=Original_Total_Amount*Discount;
		Final_Total_Amount=Original_Total_Amount-Total_Amount_Saved;
	}
	else if(Original_Total_Amount <=3000){
		Discount=0.12;
		Total_Amount_Saved=Original_Total_Amount*Discount;
		Final_Total_Amount=Original_Total_Amount-Total_Amount_Saved;
	}
	else if (Original_Total_Amount <=5000) {
		Discount=0.22;
		Total_Amount_Saved=Original_Total_Amount*Discount;
		Final_Total_Amount=Original_Total_Amount-Total_Amount_Saved;
	}
	else {
		Discount=0.30;
		Total_Amount_Saved=Original_Total_Amount*Discount;
		Final_Total_Amount=Original_Total_Amount-Total_Amount_Saved;
	}
	printf(" The Original Total Cost is : %.2f\nTotal Amount Saved is :%.2f\nFinal Amount after Discount is :%.2f",Original_Total_Amount,Total_Amount_Saved,Final_Total_Amount);
}
else {
	printf("Original Total Cost cant be in negative.");
}

	return 0;
	}
