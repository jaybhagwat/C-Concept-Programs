/* Write a program which accepts string input from user and display below pattern */

#include<stdio.h>
void pattern25(char *);
int main()
{
	char arr[100];
	printf("Enter the string\n:");
	scanf("%[^'\n']s",arr);
	
	pattern25(arr);
	
	return 0;
}

void pattern25(char *arr)
{	
	char *p=NULL;
	int i=0,j=0,k=0;

	while(arr[j]!='\0')
	{
		j++;
	}
	
	for(i=1;i<=j;i++)
	{
		for(k=0;k<j;k++)
		{
			if(i<(k+1))
			printf("@\t");
			else
			printf("%c\t",arr[k]);
			
		}
		printf("\n");
	}
}

//Output
/*
jay@jay-INVALID:~$ gcc Lb17-5.c
jay@jay-INVALID:~$ ./a.out
Enter the string
:Hello
H	@	@	@	@	
H	e	@	@	@	
H	e	l	@	@	
H	e	l	l	@	
H	e	l	l	o	

*/
