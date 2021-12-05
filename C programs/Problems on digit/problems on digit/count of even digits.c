#include<stdio.h>    //header file inclusion
int CountEven(int);    //function declaration
int main()         //entry point function
{
	int iValue=0;
	int iRet=0;
	
	printf("enter number\n");
	scanf("%d",&iValue);
	
	iRet=CountEven(iValue); //function call
	
    printf("number of even digits are:%d\n",iRet);
	
	
	return 0;
}
int CountEven(int iNo)     //function defination
{
	
	//local variables
	int iCnt=0;
	int iDigit=0;
	if(iNo==0)
	{
		
		return 1;
	}
	
	if(iNo<0)
	{
		iNo=-iNo;
		
	}
	
	while(iNo>0)   //where N is number of digits   (N>=0)
  {
	iDigit=iNo%10; 
   if((iDigit%2)==0)
   {	   
	iCnt++;
    
	}
  iNo=iNo/10;
}
  return iCnt;
	
}