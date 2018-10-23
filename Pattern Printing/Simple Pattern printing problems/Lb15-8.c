/* Write a program which accepts two input from user and display below output */

#include<stdio.h>
void pattern8(int iNo1,int iNo2)
{
	int i=0,j=0;
	for(i=0;i<iNo1;i++)
	{	
	int k=1;
		for(j=iNo2;j>0;j--)
		{
			printf("* \t ");
			
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
	
	pattern8(iNum1,iNum2);
	return 0;
	
}

/* output
jay@jay-INVALID:~$ gcc Lb15-8.c
jay@jay-INVALID:~$ ./a.out
Enter two number
 4
4
* 	 * 	 * 	 * 	 
* 	 * 	 * 	 
* 	 * 	 
* 	 

*/
