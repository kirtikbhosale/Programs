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
	
	iSum=iSum+Arr[0];
	iSum=iSum+Arr[1];
	iSum=iSum+Arr[2];
	iSum=iSum+Arr[3];
	iSum=iSum+Arr[4];
	
	printf("addition is %d",iSum);
	
    return 0;	
}


