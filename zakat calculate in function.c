#include<stdio.h>
#include<conio.h>

float calculates_zakat(float total_wealth, float gold_rate){
 
float	nisab_gold = 87.48;
float	nisab_PKR =  nisab_gold * gold_rate;
	
if(total_wealth >= nisab_PKR){
	float zakat_payble = (total_wealth/100) * 2.5;
	return zakat_payble;
	}else{
	    return 0;	
	}
}

int main(){
	float total_wealth, gold_rate, zakat_payble;
	
	printf("Entre you total wealth in PKR: ");
	scanf("%f", &total_wealth);
	
	printf("Entre the current gold rate in PKR per grams: ");
	scanf("%f", &gold_rate);
	
float calculate_zakat(float total_wealth, float gold_rate);
		
	if(zakat_payble > 0){
	printf("zakat payble: %.2f PKR\n", zakat_payble);
	}else{
	    printf("Your total wealth does not meet with Nisab threshold. No zakat is payble.\n ");
	}
	return 0;
}