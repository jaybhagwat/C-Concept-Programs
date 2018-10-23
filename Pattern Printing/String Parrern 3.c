/* Write a program which accepts string input from user and display below pattern */

#include<stdio.h>
void pattern23(char *);
int main()
{
	char arr[100];
	printf("Enter the string\n:");
	scanf("%[^'\n']s",arr);
	
	pattern23(arr);
	
	return 0;
}

void pattern23(char *arr)
{	
	char *p=NULL;
	int i=0,j=0,k=0,l=0;

	while(arr[j]!='\0')
	{
		j++;
	}
	for(i=0;i<j;i++)
	{
		for(k=0;k<=l;k++)
		{
		printf("%c\t",arr[k]);
		}
		if(l<=j)
		l++;
		printf("\n");
	}
}
	
//Output
/*
jay@jay-INVALID:~$ gcc Lb17-3.c
jay@jay-INVALID:~$ ./a.out
Enter the string
:Marvellous
M	
M	a	
M	a	r	
M	a	r	v	
M	a	r	v	e	
M	a	r	v	e	l	
M	a	r	v	e	l	l	
M	a	r	v	e	l	l	o	
M	a	r	v	e	l	l	o	u	
M	a	r	v	e	l	l	o	u	s	
jay@jay-INVALID:~$ gcc Lb17-3.c
jay@jay-INVALID:~$ ./a.out
Enter the string
:Hello
H	
H	e	
H	e	l	
H	e	l	l	
H	e	l	l	o	
*/
