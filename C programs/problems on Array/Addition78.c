#include<stdio.h>
#include<stdlib.h>

int Addition(int Brr[],int iSize)
{
	int iSum=0;
	int iCnt=0;
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		
	iSum=iSum+Brr[iCnt];
	}
	return iSum;
}
int main()
{
	
	int *Arr=NULL;
	
	
	int iLength=0;
	int iCnt=0;
	int iRet=0;
	
	printf("enter number of elements\n");
	scanf("%d",&iLength);
	
	Arr=(int*)malloc(sizeof(int) * iLength);
	
	printf("enter numbers\n");
	for(iCnt=0;iCnt<iLength;iCnt++)
	
	{
		scanf("%d",&Arr[iCnt]);
		
		
	}
	
	iRet=Addition(Arr,iLength);//Addition(200);
	
	printf("addition is %d",iRet);
	free(Arr);
    return 0;	
}


