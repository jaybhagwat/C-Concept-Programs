/*Write a progra which accepts number from user and display below patter */

#include<stdio.h>
void pattern26(int iNo)
{
 int i=0,j=0,iCnt=0,iNum=0,iNo3=0,iNo4=0;
 int iNo1=iNo;
 int iNo2=iNo;
	while(iNo1>0)
 	{
		iNo4=iNo1%10;
		iNo3=(iNo3*10)+iNo4;
		iNo1=iNo1/10;
		iCnt++;	
	}
		
 	for(i=1;i<=iCnt;i++)
 	{	
 		iNo=iNo3;
 		for(j=1;j<=iCnt;j++)
 		{
			iNum=iNo%10;
			printf("%d\t",iNum);
			iNo=iNo/10;
		}	
			printf("\n");
			
 	}
 }
 
int main()
{
	int iNo=0;
	printf("Enter the Number\n");
	scanf("%d",&iNo);
	
	pattern26(iNo);
	
	return 0;
}

//Output
/*
jay@jay-INVALID:~$ gcc Lb18-1.c
jay@jay-INVALID:~$ ./a.out
Enter the Number
987
9	8	7	
9	8	7	
9	8	7	

*/
