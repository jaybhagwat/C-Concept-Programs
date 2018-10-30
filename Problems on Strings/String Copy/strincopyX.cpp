#include"Header.h"
void stringCpyX(char *str,char *dest)
{
	if((str==NULL) || (dest==NULL))
	{
		return;
	}
	while(*str!='\0')
	{
		
		*dest=*str;
		str++;
		dest++;
	}
	*dest='\0';
}