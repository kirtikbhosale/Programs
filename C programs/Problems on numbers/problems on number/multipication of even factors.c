#include<stdio.h>
int MultFact(int iNo)
{
	   int i=0;
	   int Mul=1;
	 
	   for(i=1;i<=iNo/2;i++)
	      if(iNo%i==0)
		   
		   {
			    printf("%d\n",i);
			    Mul=Mul*i;
		   }
		   
	       return Mul;
}
int main()
{
  int iValue=0;
  int iRet=0;
printf("enter number\n");
scanf("%d",&iValue); 

iRet=MultFact(iValue);
printf("multiplication of factors is %d",iRet);
return 0;
	
	
	
}