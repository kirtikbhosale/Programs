#include<stdio.h>    //header file inclusion
void Display(int);    //function declaration
int main()         //entry point function
{
	int iValue=0;
	printf("enter number\n");
	scanf("%d",&iValue);
	Display(iValue);      //function call
	
	
	return 0;
}
void Display(int iNo)     //function defination
{
	
	//local variables
	
	int iDigit=0;
	
	while(iNo>0)
  {
	iDigit=iNo%10;   
	
	
	iNo=iNo/10; 
	if((iDigit%2)==0)
	{printf("%d\n",iDigit);
	}
	
  }

	
}