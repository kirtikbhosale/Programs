#include<stdio.h>

int Addition(int*Brr,int iSize)
{
	int iSum=0;
	int iCnt=0;
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		
	iSum=iSum+(*Brr);
	Brr++;
	}
	return iSum;
}
int main()
{
	
	int Arr[5];//static memory
	int iCnt=0;
	int iRet=0;
	printf("enter numbers\n");
	
	
	for(iCnt=0;iCnt<5;iCnt++)
	
	{
		scanf("%d",&Arr[iCnt]);
		
		
	}
	
	iRet=Addition(Arr,5);//Addition(100);
	
	printf("addition is %d",iRet);
	
    return 0;	
}


