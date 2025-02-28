
#include<stdio.h>
#include<conio.h>

float calculatefuelcost (float distance, float fuel_average, float fuel_price){
	return (distance / fuel_average) * fuel_price;
}

int main (){
	float distance, fuel_average, fuel_price, total_cost;
	
	printf("Entre the total trip distance (in kilometers):");
	scanf("%f", &distance);
	
	printf("Entre the vehicle fuel consunption (in km/liters):");
	scanf("%f", &fuel_average);
	
	printf("Entre the fuel price :");
	scanf("%f", &fuel_price);
	
	total_cost = calculatefuelcost(distance, fuel_average, fuel_price);
	
	printf("The total fuel cost = %2f PKR\n", total_cost);
}