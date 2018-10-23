/*Write a progra which accepts number from user and display below patter */

#include<stdio.h>
void pattern30(int iNo)
{
 int i=0,j=0,iCnt=0,iNum=0;
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
 		for(j=1;j<=iCnt;j++)
 		{
			iNum=iNo%10;
			if(((i>1) && (i<iCnt)) && ((j>1) && (j<iCnt)))
			{
			printf("0\t");
			}
			else
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
	
	pattern30(iNo);
	
	return 0;
}

///Output

/*
jay@jay-INVALID:~$ gcc Lb18-5.c
jay@jay-INVALID:~$ ./a.out
Enter the Number
9871
1	7	8	9	
1	0	0	9	
1	0	0	9	
1	7	8	9	
*/
