#include<stdio.h>
#include<stdlib.h>

int SumOdd(int Arr[],int iSize)
{
	int iSumOdd=0;
	int i=0;
	int iCnt=0;
	for(i=0;i<iSize;i++)
	{
		
		
		if((Arr[i]%2)!=0)
		{
			iSumOdd=iSumOdd+Arr[i];
			
		}
	}
	
	return iSumOdd;
}

int main()
{
	
	int iLength=0,i=0;
	int iRet=0;
	int*ptr=NULL;
	printf("enter number of elements\n");
	scanf("%d",&iLength);
	
	
	ptr=(int*)malloc(sizeof(int)*iLength);
	
	printf("Enter elements\n");
	
	for(i=0;i<iLength;i++)
	{
		scanf("%d",&ptr[i]);
		
	}
    iRet=SumOdd(ptr,iLength);
	printf("Addition of odd elements is %d\n",iRet);
	
	free(ptr);
	
	return 0;
}