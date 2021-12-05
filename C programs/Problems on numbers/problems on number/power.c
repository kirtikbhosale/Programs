#include<stdio.h>
int Power(int,int);

int main()
{
	
	int iValue1=0;
	int iValue2=0;
	int iRet=0;
	
	printf("enter first number\n");
	scanf("%d",&iValue1);
	
	printf("enter second number\n");
	scanf("%d",&iValue2);
	
	iRet=Power(iValue1,iValue2);
	printf("result is %d",iRet);
		
		
	return 0;
	
	
	
}

int Power(int x,int y)
{
	
	int iMult=1;
	
	int iCnt=0;
	for(iCnt=1;iCnt<=y;iCnt++)
	{
		iMult=iMult*x;
	}
	
	return iMult;
}