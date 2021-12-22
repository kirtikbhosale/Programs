#include<stdio.h>

int VowelCount(char*str)
{
	int iCnt=0;
	
	if(str==NULL)
	{
		return 0;
	}
	while(*str!='\0')
	{
		
		 if((*str =='a')||(*str =='e')||(*str =='i')||
		    (*str =='o')||(*str =='u'))
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

	printf("Enter string\n");
	scanf("%[^'\n']s",Arr);
	
	iRet=VowelCount(Arr);//Arr(50);
	printf("number of vowels are %d\n",iRet);
	
	return 0;
}
