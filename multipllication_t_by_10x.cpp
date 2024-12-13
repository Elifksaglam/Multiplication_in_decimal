//Multiplikation in zehner System
//Multiplication in decimal system
//10luk sistemde çarpma

#include<stdio.h>


int main () {
	int i, number;
	number=0;
	i=1;
	
	printf("Enter a number from 1 to 10:");
	scanf("%d", &number);
	
	if(number < 1 || number > 10) {
		printf("Please don't do that\n");
		return 0;
		
	}
	while(i<=10) {				
	// until 1 to 10 is the number multiplicated 
	// Von 1 bis 10 is die Number multiplikated 
	// 1den 10 a kadar Number i ile carpýldý
		printf("%d x %d = %d \n", number, i, number*i);
		i++; 
		
		
	}
	
	return 0;
}
