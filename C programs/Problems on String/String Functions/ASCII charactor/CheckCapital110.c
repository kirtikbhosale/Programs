#include<stdio.h>
#include<stdbool.h>


bool ChekCapital(char c)
{
	
	if((c>='A')&&(c<='Z'))
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
	
	bRet=ChekCapital(ch);
	
	
	if(bRet==true)
	{
		printf("It is capital");
	}
	else
	{
		printf("It is not capital");
	}
	return 0;
	
}
