/* Write a program which accepts two input from user and display below output */

#include<stdio.h>
void pattern17(int iNo1,int iNo2)
{
	int i=0,j=0,k=1;
	for(i=1;i<=iNo1;i++)
	{	
		for(j=1;j<=k;j++)
		{
		printf("%d \t",j);
		}
		printf("\n");
		if(k<iNo2)
		k++;
	}
}

int main()
{
	int iNum1=0,iNum2=0;
	printf("Enter two number\n ");
	scanf("%d %d",&iNum1,&iNum2);
	
	pattern17(iNum1,iNum2);
	return 0;
	
}

/*
jay@jay-INVALID:~$ gcc Lb16-7.c
jay@jay-INVALID:~$ ./a.out
Enter two number
 4
4
1 	
1 	2 	
1 	2 	3 	
1 	2 	3 	4 	
*/
