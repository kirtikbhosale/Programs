#include<stdio.h>

int VowelCount(char*str)
{
	int iCnt=0;
	
	if(str==NULL)
	{
		return -1;
	}
	while(*str!='\0')
	{
		
		 if((*str =='a')||(*str =='e')||(*str =='i')||
		    (*str =='o')||(*str =='u')||(*str =='A')||
			(*str =='E')||(*str =='I')||
		    (*str =='O')||(*str =='U'))
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
	
	iRet=VowelCount(NULL);//Arr(50);
	printf("number of vowels are %d\n",iRet);
	
	return 0;
}
