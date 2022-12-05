#include<stdio.h>

main(){
	
	int a,b,c,d;
	
	printf("Enter A :- ");
	scanf("%i",&a);

	printf("Enter B :- ");
	scanf("%i",&b);

	printf("Enter C :- ");
	scanf("%i",&c);

	printf("Enter D :- ");
	scanf("%i",&d);
	
	if(a>b){
		
		if(a>c){
			
				if(a>d){
					printf("A is Max");
				}			
				else{
					printf("D is Max");
				}
		}
		
		else{
			
			printf("C is max");
		}
}
		
	else if(b>c){
		
			if(b>d) {
		
			printf(" B is max");
	}
			else{ 
		
			printf("D is max");
		
		}
	}	
	else if(c>d){
		
		printf("C is Max");
	}
	
	else{
		printf("D is max");
	}
}


