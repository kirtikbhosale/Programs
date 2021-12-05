#include<stdio.h>



void DisplayTable(int);
int main()
{
	
	int iValue=0;
	
	printf("enter number to display its number\n");
	scanf("%d",&iValue);
	
	DisplayTable(iValue);
		
		
	return 0;
	
	
	
}

void DisplayTable(int iNo)
{
	
	if(iNo<0)
	{
		iNo=-iNo;
		
	}
	if(iNo==0)
	{
		return;
	}
	
	int iCnt=0;
	for(iCnt=1;iCnt<=10;iCnt++)
	{
		printf("%d\n",iNo*iCnt);
		
	}
	
	
}