/* write a program which accept string from user and copy the contents into another 
another string by removing all white spaces */

#include<stdio.h>
void StrCpyX(char *,char *);
int main()
{
	char arr[100],brr[100];
	printf("Enter the string:\n");
	scanf("%[^'\n']s",arr);
	
	StrCpyX(arr,brr);
		
	printf("Output:\n%s",brr);
	
	return 0;
}

void StrCpyX(char *str,char *brr)
{
	
	while(*str!='\0')
	{
		if(*str==' ')
		{
			while((*str==' ') && (*str!='\0'))
			{
				str++;
			}
		}
		else if((*str!=' ') && (*str!='\0'))
		{
			while((*str!=' ') && (*str!='\0'))
			{
				*brr=*str;
				str++;
				brr++;
			}
		}
	}
	return;
}
/*
jay@jay-INVALID:~$ gcc StrCpyX.c
jay@jay-INVALID:~$ ./a.out
Enter the string:
Marve llous Info system
Output:
MarvellousInfosystem
*/
