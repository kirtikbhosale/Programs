#include<stdio.h>
#include<stdbool.h>


bool ChekSmall(char c)
{
	
	if((c>='a')&&(c<='z'))
	{
		
		return true;
	}
	{
		
		return false;
	}
	
}
int main()
{
	char ch='\0';
	int bRet=0;
	printf("Enter chractor\n");
	scanf("%c",&ch);
	
	bRet=ChekSmall(ch);
	
	
	if(bRet==true)
	{
		printf("It is small");
	}
	else
	{
		printf("It is not small");
	}
	return 0;
	
}
