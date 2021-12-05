#include<stdio.h>
#include<stdbool.h>
int Reverse(int);
bool CheckPallindrome(int);
int main()
{
	int iValue=0;
	bool bRet=false;
	printf("enter number\n");
	scanf("%d",&iValue);
	
	bRet=CheckPallindrome(iValue);
	if(bRet==true)
	{
	printf( "number is pallindrome" );
	}
	else
	{
	printf("number is not pallindrome" );
	}
	return 0;
}
int Reverse(int iNo)
{
	int iDigit=0;
      int iRev=0;
	 
	  
	while(iNo!=0) 
	{
		iDigit=iNo%10;
		iRev=(iRev*10+iDigit);
		iNo=iNo/10;
	}
	
	return iRev;
}

bool CheckPallindrome(int iInput)
{
    int iNumber=0;
	iNumber=Reverse(iInput);
	if(iNumber==iInput)
	{
	return true;
	}
	else
	{
	return false;
		
	}
}		
	