#include<stdio.h>
int main()
{
	
	char a;
	
	printf("Enter any char : ");
	scanf("%c",&a);
	
	if((a >= 'a' && a<='z') || (a >= 'A' && a<='Z')){
		
		printf("This is a alphabet.");
		
	}
	
	else if(a >= '0' && a<= '9'){
		
		printf("This is a number.");
	}
	
	else{
		
		printf("This is a special char.");
	}
	
	return 0;
	
}
