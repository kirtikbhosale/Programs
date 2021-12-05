#include<stdio.h>
int Display(int iNo,int iFrequency)
{
 
  int iCount=0;
  for(iCount=1;iCount<=iFrequency;iCount++)

  {
   printf("%d\t",iNo);
  
  }

}
int main()
{
   int iValue=0;	
   int iCount=0;	
   printf("enter number\n");
   scanf("%d",&iValue);
   
   printf("enter frequency\n");
   scanf("%d",&iCount);
   
   Display(iValue,iCount );
   return 0;
	
	
}