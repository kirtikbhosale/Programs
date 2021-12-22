#include<stdio.h>
typedef unsigned int UINT;
 UINT strlenX(char*str)//strlen
{
	int iCnt=0;
	if(str==NULL)//to avoid segmentation fault
	{
		return 0;
	}
	while(*str!='\0')
	{
		iCnt++;
		str++;
	}
	return iCnt;
}
	

int main()
{
	char Arr[20];
	UINT iRet=0;
	
	printf("Enter string\n");
	scanf("%[^'\n']s",Arr);//
	//char*ptr=NULL;   gives  segmentation fault
	iRet=strlenX(Arr);//strlenX(50);//strlenX(ptr);
	
	printf("length of string is %u\n",iRet);
	
	return 0;
}
