#include<stdio.h>
#include<conio.h>

float calculate_tax(float amount){
	float FED = 0.195;
	float service_charges = 0.10;
	float total_tax = amount * (FED + service_charges); 
	
	return total_tax;
}

float remaing_balance(float amount){
	float total_tax = calculate_tax(amount);
	
	float remaining_balance = amount - total_tax;
	
	return remaining_balance;
}

int main(){
	float recharge_amount;
	
	printf("Entre the recharge amount");
	scanf("%f", &recharge_amount);
	
	float available_balance = remaing_balance(recharge_amount);
	
	printf("Available Balance: %.2f PKR\n", available_balance);
	
	return 0;
}