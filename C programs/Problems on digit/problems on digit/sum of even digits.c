#include<stdio.h>    //header file inclusion
int SumEven(int);    //function declaration
int main()         //entry point function
{
	int iValue=0;
	int iRet=0;
	
	printf("enter number\n");
	scanf("%d",&iValue);
	
	iRet=SumEven(iValue); //function call
	
    printf("sum of even digits are digits are:%d\n",iRet);
	
	
	return 0;
}
int SumEven(int iNo)     //function defination
{
	
	//local variables
	
	int iDigit=0;
	int iSum=0;
	if(iNo<0)
	{
		iNo=-iNo;
		
	}
	
	while(iNo>0)   //where N is number of digits   (N>=0)
  {
	iDigit=iNo%10; 
   if((iDigit%2)==0)
   {	   
	iSum=iSum+iDigit;
    
	}
  iNo=iNo/10;
}
  return iSum;
	
}