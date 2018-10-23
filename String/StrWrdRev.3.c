/* Write a program which accept string from user and Reverse each word in Place*/

#include<stdio.h>
void StrWrdRev(char *arr)
{
	char temp;
	char *ptr=NULL,*btr=NULL;
	while(*arr!='\0')
	{
		if(*arr==' ')
		{
			while((*arr==' ') && (*arr!='\0'))
			{
				arr++;
			}
		}
		else if(*arr!=' ')
		{
			ptr=arr;
			while((*ptr!=' ') && (*ptr!='\0'))
			{
				ptr++;
			}
			btr=ptr;
			ptr--;
			while(arr<ptr)
			{
				temp=*ptr;
				*ptr=*arr;
				*arr=temp;
				ptr--;
				arr++;
			}
			arr=btr;
		}
	}		
}			
			

int main()
{
	char arr[100];
	
	printf("Enter the String\n");
	scanf("%[^'\n']s",arr);
	
	StrWrdRev(arr);
	
	printf("Output:\n%s",arr);
	
	return 0;
}
/*
jay@jay:~$ gcc StrWrdRev.c
jay@jay:~$ ./a.out 
Enter the String:
Jay Manoj Bhagwat
Output:
yaJ jonaM tawgahB
*/
