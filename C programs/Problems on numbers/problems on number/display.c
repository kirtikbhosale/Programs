#include<stdio.h>

void Display(int iNo)//if no is less than 10 print hello otherwise demo

{
	
		if(iNo<=10)
		{
			printf("Hello");
		}
		else
		{
			printf("Demo");
			
		}
	
	
	
}
int main()
{
	int iValue=0;
	printf("enter number");
	scanf("%d",&iValue);
	Display(iValue);
	return 0;
	
	
}