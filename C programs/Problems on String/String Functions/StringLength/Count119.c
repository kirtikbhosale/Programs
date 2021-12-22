#include<stdio.h>

int Count(char*str)
{
	int CCount=0;
	int SCount=0;
	if(str==NULL)
	{
		return 0;
	}
	while(*str!='\0')
	{
		
		 if((*str>='A')&&(*str<='Z'))
		 {
		   CCount++;
		   
		 }
		 else if((*str>='a')&&(*str<='z'))
		 {
		   SCount++;
		   
		 }
		 
		 str++;
	}
	printf("count of small letters are : %d\n",SCount);
	printf("count of capital letters are : %d\n",CCount);
}
	

int main()
{
	char Arr[20];

	printf("Enter string\n");
	scanf("%[^'\n']s",Arr);
	
	Count(Arr);//Arr(50);
	
	return 0;
}
