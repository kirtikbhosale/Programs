#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int);
int main()
{
	
	int iValue=0;
	BOOL bRet=FALSE;
	printf("enter number\n");
	scanf("%d",&iValue);
	bRet=ChkZero(iValue);
	
	if(bRet==TRUE)
	{
	printf("It contains zero");
	}
	else 
	{
		
		printf(" It not contains zero");
	}			
	return 0;
	
	
	
}
int ChkZero(int iNo)
{  
    int iCnt=0;
	int iDigit=0;
	
	while(iNo!=0)   
  {
	     iDigit=iNo%10; 
          if(iDigit==0)
        {	   
	       iCnt++;
    
	    }
        iNo=iNo/10;
  }
  
     if(iCnt>0)
    {
	      return TRUE;
     }
       else
    {
	  return FALSE;
	}
  	
}