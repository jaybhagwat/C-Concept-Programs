#include"Header.h"
void cpyCapital(char *str,char *dest)
{
	while(*str!='\0')
	{
		if((*str>=65) && (*str<=90))
		{
			*dest=*str;
			dest++;
		}
		str++;
	}
	*dest='\0';
}