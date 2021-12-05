#include<stdio.h>
#include<stdbool.h>
/*#define true 1
#define false 0*/

int SumFactors(int);
bool CheckPerfect(int);
int main()
{
	
	int iValue=0;
	int bRet=false;
	printf("enter number\n");
	scanf("%d",&iValue);
	bRet=CheckPerfect(iValue);
	
	if(bRet==true)
	{
	printf("perfect number");///6,28,496,8128
	}
	else 
	{
		
		printf(" not perfect number");
	}			
	return 0;
	
	
	
}

bool CheckPerfect(int iNumber)
{
	int iRet=0;
	if(iNumber<0)
	 {
		 iNumber=-iNumber;
	 }
	iRet=SumFactors(iNumber);
	if(iRet==iNumber)
	{
	
	return true;
	}
	else
	{
	   return false;	
	}
		
}
int SumFactors(int iNo)
{
	
     int iCnt=0;//loop counter
	 int iSum=0;
	 if(iNo<0)
	 {
		 iNo=-iNo;
	 }
	 
	for(iCnt=1;iCnt<=(iNo/2);iCnt++)
 
  {    if((iNo%iCnt)==0)
			
	
	  {
	 
	     iSum=iSum+iCnt;
	   }	 
	 
	 
	}
	return iSum;
	
}
