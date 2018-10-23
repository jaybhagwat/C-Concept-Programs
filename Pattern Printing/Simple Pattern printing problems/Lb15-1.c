/* Write A Program which accept input from user and display below pattern */
#include<stdio.h>
void pattern1(int iNo)
{
	int i=0;
	for(i=0;i<=iNo;i++)
	{	
		printf("%c \t",i+65);
	}
}

int main()
{
	int iNum=0;
	printf("Enter the number\n ");
	scanf("%d",&iNum);
	
	pattern1(iNum);
	return 0;
	
}

/* Output
jay@jay-INVALID:~$ gcc Lb15-1.c
jay@jay-INVALID:~$ ./a.out
Enter the number
 7
A 	B 	C 	D 	E 	F 	G 	H 	
*/
