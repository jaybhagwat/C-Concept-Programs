/* Write a program which accepts two input from user and display below output */

#include<stdio.h>
void pattern6(int iNo1,int iNo2)
{
	int i=0,j=0;
	for(i=0;i<iNo1;i++)
	{	
	int k=1;
		for(j=0;j<iNo2;j++)
		{
			if((j%2)!=0)
			{
			printf("$ \t");
			}
			else
			{
			printf("%d \t",k);
			k++;
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
	
	pattern6(iNum1,iNum2);
	return 0;
	
}

/*
jay@jay-INVALID:~$ gcc Lb15-6.c
jay@jay-INVALID:~$ ./a.out
Enter two number
 4
5
1 	$ 	2 	$ 	3 	
1 	$ 	2 	$ 	3 	
1 	$ 	2 	$ 	3 	
1 	$ 	2 	$ 	3 	

*/
