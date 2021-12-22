
//input 2
//a 
//b
#include<stdio.h>
void Display(int iNo)
{
	
	
	int iCnt=0;
	char ch='\0';
	
		for(iCnt=1,ch='a';iCnt<=iNo;iCnt++,ch++)
		{
			
			printf("%c\n",ch);
		}	
		
	
}



int main()
{
   int iValue=0;
   printf("enter number\n");
   scanf("%d",&iValue);
   Display(iValue);
   return 0;


}