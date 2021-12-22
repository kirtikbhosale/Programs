#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
	UINT iResult=0;
	UINT iMask=0x0000000f;
	
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
	UINT iValue=0;
	bool bRet=false;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	bRet=CheckBit(iValue);
	
	if(bRet==true)
	{
		printf("first 4 bits are on\n");
	}
	else
	{
		printf("bits are off \n");
	
	}
	
	return 0;
	
}
