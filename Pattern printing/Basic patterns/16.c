/* Write a program which accepts two input from user and display below output */

#include<stdio.h>
void pattern16(int iNo1,int iNo2)
{
	int i=0,j=0,k=1;
	for(i=1;i<=iNo1;i++)
	{	
		for(j=1;j<=iNo2;j++)
			{
			printf("%d \t",j);
			}
			printf("\n");
			iNo2--;
	}
}

int main()
{
	int iNum1=0,iNum2=0;
	printf("Enter two number\n ");
	scanf("%d %d",&iNum1,&iNum2);
	
	pattern16(iNum1,iNum2);
	return 0;
	
}

/* Output
jay@jay-INVALID:~$ gcc Lb16-6.c
jay@jay-INVALID:~$ ./a.out
Enter two number
 4
4
1 	2 	3 	4 	
1 	2 	3 	
1 	2 	
1 	

*/
