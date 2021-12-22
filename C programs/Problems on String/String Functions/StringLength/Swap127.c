#include<stdio.h>

void Swap(char*p,char*q)
{
	
	char temp;
	temp=*p;
	*p=*q;
	*q=temp;
	
}
	

int main()
{
	char ch1,ch2;
	
	
	

	printf("Enter first charactor\n");
	scanf("%c",&ch1);
	
	printf("Enter first charactor\n");
	scanf(" %c",&ch2);
	
	printf("before swapping charactors are %c %c\n",ch1,ch2);
	Swap(&ch1,&ch2);//Swap(100,200)
    printf("after swapping charactors are %c %c\n",ch1,ch2);
	return 0;
}
