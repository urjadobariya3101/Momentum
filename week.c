#include<stdio.h>
int main()
{
	
	char a;
	
	printf("Enter first char of week days :");
	scanf("%c",&a);
	
	switch(a){
		
		case 'm':
		case 'M':
			printf("Monday");
			break;
			
		case 't':
		case 'T':
			printf("Tuesday");
			break;
			
		case 'w':
		case 'W':
			printf("Wednesday");
			break;
			
		case 'h':
		case 'H':
			printf("Thursday");
			break;
			
		case 'f':
		case 'F':
			printf("Friday");
			break;
			
		case 'a':
		case 'A':
			printf("saturday");
			break;
			
		case 's':
		case 'S':
			printf("Sunday");
			break;
			
		default:
			printf("Invalid char!!");
	}
	
	return 0;
	
}
