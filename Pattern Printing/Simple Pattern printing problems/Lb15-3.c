/* Write a program which accepts two input from user and display below output */


#include<stdio.h>
void pattern3(int iNo1,int iNo2)
{
	int i=0,j=0;
	for(i=0;i<iNo1;i++)
	{	
		for(j=0;j<iNo2;j++)
		{
			printf("* \t");
		}
		printf("\n");
	}
}

int main()
{
	int iNum1=0,iNum2=0;
	printf("Enter two number\n ");
	scanf("%d %d",&iNum1,&iNum2);
	
	pattern3(iNum1,iNum2);
	return 0;
	
}

/*output
jay@jay-INVALID:~$ gcc Lb15-3.c
jay@jay-INVALID:~$ ./a.out
Enter two number
 4
5
* 	* 	* 	* 	* 	
* 	* 	* 	* 	* 	
* 	* 	* 	* 	* 	
* 	* 	* 	* 	* 	

*/
