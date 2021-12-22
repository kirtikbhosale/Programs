#include<stdio.h>
void DisplayTable()
{
	int i=0;
	printf("ASCII table is");
	printf("********************************\n");
	
	printf("Decimal charactor is");
	printf("********************************\n");
	
	for(i=0;i<=127;i++)
	{
		
		printf("%d\t%c\n",i,i);
	}
	
}

int main()
{

	DisplayTable();
	
	return 0;
}
