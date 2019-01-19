/* Write a program which accepts string input from user and display below pattern */

#include<stdio.h>
void pattern22(char *);
int main()
{
	char arr[100];
	printf("Enter the string\n:");
	scanf("%[^'\n']s",arr);
	
	pattern22(arr);
	
	return 0;
}

void pattern22(char *arr)
{	
	char *p=NULL;
	int i=0,j=0,k=0,l=0;

	while(arr[j]!='\0')
	{
		j++;
	}
	l=j;
	for(i=0;i<l;i++)
	{
		for(k=0;k<j;k++)
		{
		printf("%c \t",arr[k]);
		}
		j--;
		printf("\n");
	}
}
	
	
/* output
jay@jay-INVALID:~$ gcc Lb17-2.c
jay@jay-INVALID:~$ ./a.out
Enter the string
:Marvellous
M 	a 	r 	v 	e 	l 	l 	o 	u 	s 	
M 	a 	r 	v 	e 	l 	l 	o 	u 	
M 	a 	r 	v 	e 	l 	l 	o 	
M 	a 	r 	v 	e 	l 	l 	
M 	a 	r 	v 	e 	l 	
M 	a 	r 	v 	e 	
M 	a 	r 	v 	
M 	a 	r 	
M 	a 	
M 	
jay@jay-INVALID:~$ gcc Lb17-2.c
jay@jay-INVALID:~$ ./a.out
Enter the string
:Hello
H 	e 	l 	l 	o 	
H 	e 	l 	l 	
H 	e 	l 	
H 	e 	
H 	

*/
