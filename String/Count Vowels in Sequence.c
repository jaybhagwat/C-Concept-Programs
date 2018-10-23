#include<stdio.h>
int CountVowels(char *);

#include"Header.h"
int main()
{
	char arr[100];
	int iRet=0;

	printf("Enter the string\n");
	scanf("%[^'\n']s",arr);

	iRet=CountVowels(arr);
	printf("Number of vowels in string are %d",iRet);

	return 0;
}


int CountVowels(char *arr)
{
	char brr[]={'a','e','i','o','u'};
	int iCnt=0,iRet=0,i=0,j=0;
	char crr[5]={0};
	while(arr[i]!='\0')
	{
		if(arr[i]==brr[j])
		{
			crr[iCnt]++;
		}
		else 
		{
			if(arr[i]>brr[j])
			{
				if(arr[i]==brr[j+1])
				{
					j++;
						if(brr[j]==arr[i])
						{
							iCnt++;
							crr[iCnt]++;
						}
				}
			}
		}
		i++;
	}

	for(int k=0;k<5;k++)
	{
		if(crr[k]==0)
		{
			return 0;
		}
		iRet=iRet+crr[k];
	}

	return iRet;
}


	