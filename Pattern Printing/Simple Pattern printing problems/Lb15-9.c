/* Write a program which accepts two input from user and display below output */

#include<stdio.h>
void pattern9(int iNo1,int iNo2)
{
	int i=0,j=0,k=1;
	for(i=0;i<iNo1;i++)
	{	
	
		for(j=0;j<k;j++)
		{
			printf("* \t ");
			
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
	
	pattern9(iNum1,iNum2);
	return 0;
	
}

/*

jay@jay-INVALID:~$ gcc Lb15-9.c
jay@jay-INVALID:~$ ./a.out
Enter two number
 4
4
* 	 
* 	 * 	 
* 	 * 	 * 	 
* 	 * 	 * 	 * 	

*/
