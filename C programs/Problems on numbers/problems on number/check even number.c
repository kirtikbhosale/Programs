#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkEven(int iNo)
{
	
	if((iNo%2)==0)
	
	{
		
		return TRUE;
		
	}
	else
	{
		return FALSE;
		
	}
}
int main()
{
	int iValue=0;
	BOOL bRet=FALSE;
	
	printf("enter number");
	scanf("%d",&iValue);
	
	bRet=ChkEven(iValue);
	
     if(bRet==TRUE)
	{
		printf("Even number");
	}
	else
	{
		printf("Not Even number");
	}
	
	return 0;
}