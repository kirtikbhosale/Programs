#include<stdio.h>
#include<stdbool.h>
bool CheckBit(int iNo)
{
	int iResult=0;
	int iMask=0x00000008;
	
	iResult=iNo&iMask;
	if(iResult==iMask)
	{
		return true;
	}
	else 
	{
		return false;
	}
	
}

int main()
{
	int iValue=0;
	bool bRet=false;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	bRet=CheckBit(iValue);
	
	if(bRet==true)
	{
		printf("4th bit is on\n");
	}
	else
	{
		printf("4th bit is off\n");
	
	}
	
	return 0;
	
}
