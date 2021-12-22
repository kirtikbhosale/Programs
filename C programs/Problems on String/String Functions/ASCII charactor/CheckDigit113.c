#include<stdio.h>
#include<stdbool.h>


bool ChekDigit(char c)
{
	
	if((c>='0')&&(c<='9'))
	{
		//printf("%s",c)
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
	
	bRet=ChekDigit(ch);
	
	
	if(bRet==true)
	{
		printf("It is digit");
	}
	else
	{
		printf("It is not digit");
	}
	return 0;
	
}
