#include <stdio.h>

int main (){
	int Current_Time;
	printf("Enter your current time in 24-hour format:");
	scanf("%d",&Current_Time);
	if(Current_Time>=6 && Current_Time<12) {
		printf("Good Morning.");
	}
	else if(Current_Time>=12 && Current_Time<18){
		printf("Good Afternoon.");
	}
	else if(Current_Time>=18 && Current_Time<24){
		printf("Good Evening.");
	}
	else if(Current_Time>=0 && Current_Time<=5){
		printf("Good Night.");
	}
	else {
		printf("Invalid Input.Time should be between 0-23");
	}
	return 0;
}