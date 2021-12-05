#include<stdio.h>    //header file inclusion
int Display(int);    //function declaration
int main()         //entry point function
{
	int iValue=0;
	int iRet=0;
	
	printf("enter number\n");
	scanf("%d",&iValue);
	
	iRet=Display(iValue); //function call
	
    printf("Addition of digit is:%d\n",iRet);
	
	
	return 0;
}
int Display(int iNo)     //function defination
{
	
	//local variables
	
	int iDigit=0;
	int iSum=0;
	if(iNo<0)
	{
		iNo=-iNo;
		
	}
	
	while(iNo>0)
  {
	iDigit=iNo%10;   
	iSum=iSum+iDigit;
	
	iNo=iNo/10;
    
	
	
  }
  return iSum;
	
}