/* Write a program which accepts two input from user and display below output */

#include<stdio.h>
void pattern13(int iNo1,int iNo2)
{
	int i=0,j=0,k=1;
	for(i=1;i<=iNo1;i++)
	{	
		for(j=1;j<=iNo2;j++)
		{
			if(((j>(1)) && (j<(iNo2))) && ((i>(1)) && (i<(iNo1))))
			{
			printf("*\t");
			}
			else
			{
			printf("%d\t",i);
			}
		}
		printf("\n");
	}
}

int main()
{
	int iNum1=0,iNum2=0;
	printf("Enter two number\n ");
	scanf("%d %d",&iNum1,&iNum2);
	
	pattern13(iNum1,iNum2);
	return 0;
	
}

/* Output
jay@jay-INVALID:~$ gcc Lb16-3.c
jay@jay-INVALID:~$ ./a.out
Enter two number
 4
4
1	1	1	1	
2	*	*	2	
3	*	*	3	
4	4	4	4	

*/
