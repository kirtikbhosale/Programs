#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(char*str)
{
	
	char*end=NULL;
	bool flag=true;
	end=str;
	
	while(*end!='\0')
	{
		end++;
	}
	end--;
	
	while(str<end)
	{
		if(*str!=*end)
		{
			flag=false;
			break;
		}
		str++;
		end--;
	}
	 
		return flag;
	
}
	

int main()
{
	char Arr[30];
	bool bRet=false;
	

	printf("Enter string\n");
	scanf("%[^'\n']s",Arr);
	
	
	
	bRet=CheckPallindrome(Arr);
	
	if(bRet==true)
	{
	  printf("It is pallindrome");
	}
	else
	{
		printf("It is not pallindrome");
	}
	return 0;
}
