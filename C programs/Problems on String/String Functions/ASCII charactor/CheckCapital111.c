#include<stdio.h>
#include<stdbool.h>


bool ChekCapital(char c)
{
	
	if((c>=65)&&(c<=90))
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
	int bRet=false;
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
