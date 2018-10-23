/* Write a program which accepts string input from user and display below pattern */

#include<stdio.h>
void pattern21(char *);
int main()
{
	char arr[100];
	printf("Enter the string\n:");
	scanf("%[^'\n']s",arr);
	
	pattern21(arr);
	
	return 0;
}

void pattern21(char *arr)
{	
	char *p=NULL;
	int i=0,j=0,k=0;

	while(arr[j]!='\0')
	{
		j++;
	}
	
	for(i=0;i<j;i++)
	{
		for(k=0;k<j;k++)
		{
		printf("%c \t",arr[k]);
		}
		printf("\n");
	}
}
	
	
//////////Output
/*
jay@jay-INVALID:~$ gcc Lb17-1.c
jay@jay-INVALID:~$ ./a.out
Enter the string
:Marvellous
M 	a 	r 	v 	e 	l 	l 	o 	u 	s 	
M 	a 	r 	v 	e 	l 	l 	o 	u 	s 	
M 	a 	r 	v 	e 	l 	l 	o 	u 	s 	
M 	a 	r 	v 	e 	l 	l 	o 	u 	s 	
M 	a 	r 	v 	e 	l 	l 	o 	u 	s 	
M 	a 	r 	v 	e 	l 	l 	o 	u 	s 	
M 	a 	r 	v 	e 	l 	l 	o 	u 	s 	
M 	a 	r 	v 	e 	l 	l 	o 	u 	s 	
M 	a 	r 	v 	e 	l 	l 	o 	u 	s 	
M 	a 	r 	v 	e 	l 	l 	o 	u 	s 	
jay@jay-INVALID:~$ gcc Lb17-1.c
jay@jay-INVALID:~$ ./a.out
Enter the string
:Hello
H 	e 	l 	l 	o 	
H 	e 	l 	l 	o 	
H 	e 	l 	l 	o 	
H 	e 	l 	l 	o 	
H 	e 	l 	l 	o 	

*/
	
	
