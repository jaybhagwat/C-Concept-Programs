/*Write a program which accepts number from user and display below patter */

#include<stdio.h>
void pattern28(int iNo)
{
 int i=0,j=0,iCnt=0,iNum=0,k=1;
 int iNo1=iNo;
 int iNo2=iNo;
	while(iNo1>0)
 	{
		iNo1=iNo1/10;
		iCnt++;	
	}
		
 	for(i=1;i<=iCnt;i++)
 	{	
 		iNo=iNo2;
 		for(j=1;j<=k;j++)
 		{
			iNum=iNo%10;
			printf("%d\t",iNum);
			iNo=iNo/10;
		}
		if(k<iCnt)
		k++;	
			printf("\n");
			
 	}
 }
 
int main()
{
	int iNo=0;
	printf("Enter the Number\n");
	scanf("%d",&iNo);
	
	pattern28(iNo);
	
	return 0;
}


//Output
/*
jay@jay-INVALID:~$ gcc Lb18-3.c
jay@jay-INVALID:~$ ./a.out
Enter the Number
9871
1	
1	7	
1	7	8	
1	7	8	9	
*/
