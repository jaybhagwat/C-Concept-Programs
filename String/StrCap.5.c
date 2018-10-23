/* Write a program which accept string from user and replace each 
occurence of first character of each word into capital case */

#include<stdio.h>
void StrCap(char *str);
int main()
{
	char arr[100];
	printf("Enter the String\n:");
	scanf("%[^'\n']s",arr);
	
	StrCap(arr);
	
	printf("Output\n:%s",arr);
	
	return 0;
}

void StrCap(char *str)
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
		else if(*str!=' ')
		{
			if((*str>=97) && (*str<=122))
			{
				*str=*str-32;
			}
			while((*str!='\0') && (*str!=' '))
			{
				str++;
			}
		}
	}
	return;
}

/////////////////////////////////output
/*
jay@jay-INVALID:~$ gcc StrCap.c
jay@jay-INVALID:~$ ./a.out
Enter the String
:jay manoj bhagwat
Output
:Jay Manoj Bhagwat
*/
