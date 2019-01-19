/* Write a program which accepts two input from user and display below output */

#include<stdio.h>
void pattern7(int iNo1,int iNo2)
{
	int i=0,j=0;
	for(i=0;i<iNo1;i++)
	{	
	int k=1;
		for(j=0;j<iNo2;j++)
		{
			if((i%2)==0)
			{
			printf("# \t");
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
	
	pattern7(iNum1,iNum2);
	return 0;
	
}

/*  output
jay@jay-INVALID:~$ gcc Lb15-7.c
jay@jay-INVALID:~$ ./a.out
Enter two number
 4
5
# 	# 	# 	# 	# 	
$ 	$ 	$ 	$ 	$ 	
# 	# 	# 	# 	# 	
$ 	$ 	$ 	$ 	$ 	
*/

