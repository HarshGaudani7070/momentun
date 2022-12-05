#include<stdio.h>

main(){
	
	float amt,unit,surcharge,total_bill;
	
	printf("type Unit :- ");
	
	scanf("%f",&unit);
	
	if(unit<=50){
		
		amt = unit*0.50;		
		
	}	
	
	else if(unit<=150){
		
		amt =  25 + (unit-50)*0.75;
		
		}
	
	else if(unit<=250){	
		
		amt = 100 + (unit-150)*1.20;
		
		}
	
	else{

		amt = 220 + (unit-250)*1.50;
		
		}
	
	surcharge = amt*0.2;
	
	total_bill = amt+surcharge;
	
	printf("Total Bill %.2f",total_bill);	
	
}

