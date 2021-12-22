#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iSize)
{
	int iMin=Arr[0];
	int i=0;
	for(i=1;i<iSize;i++)
	{

		
		if(Arr[i]<iMin)
		{
			iMin=Arr[i];
		}
	}
	
	return iMin;
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
    iRet=Maximum(ptr,iLength);
	printf("minimum number is  %d\n",iRet);
	
	free(ptr);
	
	return 0;
}