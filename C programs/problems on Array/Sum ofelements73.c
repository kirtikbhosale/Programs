#include<stdio.h>
int main()
{
	
	int Arr[5];//static memory
	int iSum=0;
	int iCnt=0;
	printf("enter numbers\n");
	
	
	for(iCnt=0;iCnt<5;iCnt++)
	
	{
		scanf("%d",&Arr[iCnt]);
		
	}
	
	for(iCnt=0;iCnt<5;iCnt++)
	{
		
	iSum=iSum+Arr[iCnt];
	}
	
	printf("addition is %d",iSum);
	
    return 0;	
}


