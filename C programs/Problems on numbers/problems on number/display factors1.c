#include<stdio.h>
void DisplayFactors(int);
int main()
{
	
	int iNo=0;
	printf("enter number\n");
	scanf("%d",&iNo);
	
	DisplayFactors(iNo);
	  
	
	return 0;
	
	
	
}
void DisplayFactors(int iValue)
{
	int iCnt=0;//loop counter
	
	//      1       2          3
	 printf("factors are");
	for(iCnt=1;iCnt<=(iValue/2);iCnt++)
 {
		if((iValue%iCnt)==0)
	{
	  
	     printf("%d\t",iCnt);//4
		 
	}
 }
	
	
}