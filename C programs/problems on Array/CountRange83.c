#include<stdio.h>
#include<stdlib.h>

int CountRange(int Arr[],int iSize)
{
	
	int i=0;
	int iCnt=0;
	for(i=0;i<iSize;i++)
	{
		
		
		if((Arr[i]>10)&&(Arr[i]<20))
		{
			
			iCnt++;
		}
	}
	
	return iCnt++;
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
    iRet=CountRange(ptr,iLength);
	printf("count is %d\n",iRet);
	
	free(ptr);
	
	return 0;
}