/* Write a program which accepts two input from user and display below output */

#include<stdio.h>
void pattern5(int iNo1,int iNo2)
{
	int i=0,j=0;
	for(i=0;i<iNo1;i++)
	{	
		for(j=1;j<=iNo2;j++)
		{
			if((j%2)!=0)
			{
			printf("%d \t",j);
			}
			else
			printf("$ \t");
		}
		printf("\n");
	}
}

int main()
{
	int iNum1=0,iNum2=0;
	printf("Enter two number\n ");
	scanf("%d %d",&iNum1,&iNum2);
	
	pattern5(iNum1,iNum2);
	return 0;
	
}

/*
jay@jay-INVALID:~$ gcc Lb15-5.c
jay@jay-INVALID:~$ ./a.out
Enter two number
 4
5
1 	$ 	3 	$ 	5 	
1 	$ 	3 	$ 	5 	
1 	$ 	3 	$ 	5 	
1 	$ 	3 	$ 	5 	

*/
