#include<stdio.h>

void Accept(int iNo)//accept one no from user and print that number of * on screen
{
	int iCnt=0;
	for(iCnt=1;iCnt<=5;iCnt++)
	{
		printf("*");
	}
	
}
int main()
{
	int iValue=0;
	iValue=5;
	Accept(iValue);
    return 0;
	
	
	
}
