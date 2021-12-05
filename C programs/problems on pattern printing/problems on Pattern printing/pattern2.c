#include<stdio.h>

void Display(int iNo)//accept one no of user and print that no of * on screen

{
	int iCnt=0;
	while(iCnt<iNo)
	{
		
		printf("*");
		iCnt++;
		
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