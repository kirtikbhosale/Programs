#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char ch)
{
	
	if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
	
	{
		
		return TRUE;
		
	}
	else
	{
		return FALSE;
		
	}
}
int main()
{
	char cValue='\0';
	BOOL bRet=FALSE;
	
	printf("enter charactor\n");
	scanf("%c",&cValue);
	
	bRet=ChkVowel(cValue);
	
     if(bRet==TRUE)
	{
		printf("It is vowel");
	}
	else
	{
		printf("It is not vowel");
	}
	
	return 0;
}