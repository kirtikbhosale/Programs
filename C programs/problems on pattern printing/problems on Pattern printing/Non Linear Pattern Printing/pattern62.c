//enter number of rows:3
//enter number of columns:4
//1 2 3 4 
//1 2 3 4
//1 2 3 4


#include<stdio.h>
void Display(int iRow,int iCol)
{
	
	
	   
	   int i=0;
	   int j=0;
	      
		for(i=1;i<=iRow;i++)
		{
			for(j=1;j<=iCol;j++)
			{
			  printf("%d\t",j);
			}
			
		   printf("\n");
        }

}



int main()
{
   int iValue1=0;
   int iValue2=0;
   printf("enter number of rows\n");
   scanf("%d",&iValue1);
   
   printf("enter number of columns\n");
   scanf("%d",&iValue2);
   Display(iValue1,iValue2);
  
   return 0;


}