#include<stdio.h>

int CountFrequency(char*str,char ch)
{
	int iCnt=0;
	
	if(str==NULL)
	{
		return -1;
	}
	while(*str!='\0')
	{
		
		 if(*str ==ch)
		   
		 {
			 
			 iCnt++;
		 }
		str++;
		}
	return iCnt;
}
	

int main()
{
	char Arr[30];
	int iRet=0;
	char cValue='\0';

	printf("Enter string\n");
	scanf("%[^'\n']s",Arr);
	
	printf("Enter the charactor\n");
	scanf(" %c",&cValue);//imp
	
	iRet=CountFrequency(Arr,cValue);//Arr(50);
	printf("frequency is %d\n",iRet);
	
	return 0;
}
