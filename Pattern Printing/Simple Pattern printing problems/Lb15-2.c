/* Write A Program which accept input from user and display below pattern */


#include<stdio.h>
void pattern2(int iNo)
{
	int i=0;
	for(i=0;i<=iNo;i++)
	{	if((i%2)==0)
		{
		printf("%c \t",i+65);
		}
		else
		{
		printf("%c \t",i+97);
		}
	}
}

int main()
{
	int iNum=0;
	printf("Enter the number\n ");
	scanf("%d",&iNum);
	
	pattern2(iNum);
	return 0;
	
}

/* Output
jay@jay-INVALID:~$ gcc Lb15-2.c
jay@jay-INVALID:~$ ./a.out
Enter the number
 7
A 	b 	C 	d 	E 	f 	G 	h 	
*/
