#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iSize)
{
	int iRes=0;
	int iMax=Arr[0];
	int iMin=Arr[0];
	int i=0;
	
	for(i=0;i<iSize;i++)
	{

		
		if(Arr[i]<iMin)
		{
			iMin=Arr[i];
		}
		else
		{
			iMax=Arr[i];
		
		}	
		iRes=iMax-iMin;
	}
	
	
	return iRes;
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
    iRet=Difference(ptr,iLength);
	printf("Difference is  %d\n",iRet);
	
	free(ptr);
	
	return 0;
}