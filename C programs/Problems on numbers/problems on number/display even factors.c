#include<stdio.h>

void DisplayEvenFactor(int iNo)//write a program which accept number from user and print even factors of that number.
{
	   int i=0;
	   if(iNo<=0)
	   {
		   
		  iNo=-iNo; 
		   
	   }
	   for(i=1;i<=iNo;i++)
	   {
		   if((iNo%i==0)&&(i%2==0))
		   
		   {
			  printf("%d\t",i); 
			 
		   }
		   
		   
	  }
	
}

int main()
{
	int iValue=0;
	printf("enter number\n");
	scanf("%d",&iValue);
	DisplayEvenFactor(iValue);
	return 0;
	
	
}