//input:5
//* * * * *


#include<stdio.h>
void Display(int iNo)
{
	int iCnt=0;
	for(iCnt=1;iCnt<=5;iCnt++)
	{
		
		printf("*\t");
	}
	
}

int main()
{
    int iValue=0;
	printf("Enter number\t");
	scanf("%d",&iValue);
    Display(iValue);

   return 0;
}
