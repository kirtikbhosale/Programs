#include<stdio.h>

int SpaceCount(char*str)
{
	int iCnt=0;
	int SCount=0;
	if(str==NULL)
	{
		return 0;
	}
	while(*str!='\0')
	{
		
		 if(*str ==' ')
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
	scanf("%[^'\n']s",Arr);
	
	iRet=SpaceCount(Arr);//Arr(50);
	printf("space count are %d",iRet);
	
	return 0;
}
