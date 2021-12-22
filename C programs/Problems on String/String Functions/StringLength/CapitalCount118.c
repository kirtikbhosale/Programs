#include<stdio.h>

int CapitalCount(char*str)
{
	int iCnt=0;
	if(str==NULL)
	{
		return 0;
	}
	while(*str!='\0')
	{
		
		 if((*str>='A')&&(*str<='Z'))
		 {
		   iCnt++;
		   
		 }
		 str++;
	}
	return iCnt;
}
	

int main()
{
	char Arr[20];
	int iRet=0;
	
	printf("Enter string\n");
	scanf("%[^'\n']s",Arr);//
	
	iRet=CapitalCount(Arr);//strlenX(50);
	
	printf("Capital letters are: %d\n",iRet);
	
	return 0;
}
