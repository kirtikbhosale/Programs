#include<stdio.h>
#include<stdlib.h>
/*
if(i==-1)
	{
		return -1;
	}
	else
	{
		return i;
	}
*/
int LastOccurance(int Arr[],int iSize,int iNo)
{
	
	int i=0;
	int iTemp=0;
    for(i=iSize-1;i>=0;i--)
	{
		if(Arr[i]==iNo)
		{ 
	      break; 
		}
		
	}
		return i;
	
}

int main()
{
	
	int iLength=0,i=0,iValue=0;
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
	printf("enter the element to search\n");
	scanf("%d",&iValue);
    iRet=LastOccurance(ptr,iLength,iValue);
	if(iRet==-1)
	{
		
		printf("Number is not there");
	}
	else
	{
		printf("Last Occurance at index : %d",iRet);
		
	}
	
	free(ptr);
	
	return 0;
}