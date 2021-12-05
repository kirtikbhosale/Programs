#include<stdio.h>    //header file inclusion
int CountDigit(int);    //function declaration
int main()         //entry point function
{
	int iValue=0;
	int iRet=0;
	
	printf("enter number\n");
	scanf("%d",&iValue);
	
	iRet=CountDigit(iValue); //function call
	
    printf("Total numbers of digits are:%d\n",iRet);
	
	
	return 0;
}
int CountDigit(int iNo)     //function defination
{
	
	//local variables
	
	
	int iCnt=0;
	if(iNo==0)//filter
	{
		
		return 1;
	}
	if(iNo<0)//updater
	{
		iNo=-iNo;
		
	}
	
	while(iNo>0)
  {
	
	iCnt++;//
	
	iNo=iNo/10;
    
	
	
  }
  return iCnt;
	
}