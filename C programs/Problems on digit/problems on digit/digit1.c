#include<stdio.h>    //header file inclusion
void Display();    //function declaration
int main()         //entry point function
{
	
	Display();      //function call
	
	
	return 0;
}
void Display()     //function defination
{
	
	//local variables
	int iNo=7521;
	int iDigit=0;
	
	while(iNo>0)
  {
	iDigit=iNo%10;   
	printf("%d\n",iDigit);
	iNo=iNo/10; 
  }

	
}