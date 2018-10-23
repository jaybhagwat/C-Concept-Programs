/* Write a program which accepts two input from user and display below output */

#include<stdio.h>
void pattern14(int iNo1,int iNo2)
{
	int i=0,j=0,l=1,k=1;
	for(i=1;i<=iNo1;i++)
	{	
		for(j=1;j<=k;j++)
		{
			printf("%d \t",l);
			l++;
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
	
	pattern14(iNum1,iNum2);
	return 0;
	
}

/* Output
jay@jay-INVALID:~$ gcc Lb16-4.c
jay@jay-INVALID:~$ ./a.out
Enter two number
 4
4
1 	
2 	3 	
4 	5 	6 	
7 	8 	9 	10 	

*/

