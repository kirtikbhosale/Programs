#include<stdio.h>

void Display(int iNo)//accept one numberfrom user and print that number of * on screen

{
	//int iCnt=0;
	while(iNo>0)
	{
		
		printf("*");
		iNo--;
		
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