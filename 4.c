#include<stdio.h>

main(){
	
	int day;
	
	printf(" 1. Monday\n 2. Tuesday\n 3. Wednesday\n 4. Thursday\n 5. Friday\n 6. Saturday\n 7. Sunday\n\n ");
	
	printf("type Day no. :- ");	
	scanf("%i",&day);
	
	switch(day){
		
		default:
			
			printf("\n type correct value");
			
			break;
		
		case 1 :
			
			printf("\n Monday");
			
			break;
			
		case 2 :
					
			printf("\n Tuesday");
			
			break;
		
		case 3 :
					
			printf("\n Wednesday");
			
			break;
			
		case 4 :
					
			printf("\n Thursday");
			
			break;
			
		case 5 :
					
			printf("\n Friday");
			
			break;
			
		case 6 :
					
			printf("\n Saturday");
			
			break;
			
		case 7 :
					
			printf("\n Sunday");
			
			break;
		
	}
	
}
