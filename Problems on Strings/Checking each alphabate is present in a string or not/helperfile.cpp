#include"Header.h"

BOOL String(char *str)
{
	int i=0,a=0,b=0,iCnt=0;
	int ptr[26]={0};
	
	while(str[i]!='\0')
	{
		if((str[i]>=65) && (str[i]<=90))
		{
			a=str[i]-'A';
			ptr[a]++;
		}
		else 
		{
			if((str[i]>=97) && (str[i]<=122))
			{
				a=str[i]-'a';
				ptr[a]++;
			}
			
		}
		i++;
	}

	for(iCnt=0;iCnt<26;iCnt++)
	{
		if(ptr[iCnt]<=0)
		{
			return FALSE;
		}
		else
		{
			return TRUE;
		}
	}
}