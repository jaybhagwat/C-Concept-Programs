#include"Header.h"
void StringReverse(char *str)
{
	int i=0,iLast=0,iStart=0;
	
	while(str[iStart]!='\0')
	{
		iStart++;
	}
	
	iLast=iStart-1;
	iStart=0;

	while(iStart<iLast)
	{
		i=str[iStart];
		str[iStart]=str[iLast];
		str[iLast]=i;
		iStart++;
		iLast--;
	}
	return;
}
