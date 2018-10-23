
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
// 1. Write a program which print below pattern as
///////////////////////////////////////////
//
// Input :89 67 45 78
///////////4
// Output:
//98 76 54 87
//98 76 54 87
//98 76 54 87
//98 76 54 87
// 
//
//////////////////////////////////////////////

void Pattern1(int arr[], int iSize)
{
	int i=0,j=0,k=0,iNo=0;
	
	for(i=0;i<iSize;i++)
	{
		for(j=0;j<iSize;j++)
		{
		k=arr[j];
		iNo=k%10;
		k=k/10;
		iNo=iNo*10+k;
		printf("%d\t",iNo);
		}
		printf("\n");
	}
}
// 2. Write a program which print below pattern as
///////////////////////////////////////////
//
//
// Input :89 67 45 78
/////////4
//output:
//89 67 45 78            
//98 76 54 87              
//89 67 45 78              
//98 76 54 87  


///////////////////////////////////////////
void Pattern2(int arr[], int iSize)
{
int i=0,j=0,k=0,iNo=0;
	for(i=0;i<iSize;i++)
	{   
		if(i%2!=0)
		{
			for(j=0;j<iSize;j++)
			{
				k=arr[j];
				iNo=k%10;
				k=k/10;
				iNo=iNo*10+k;
				printf("%d\t",iNo);
			}
			printf("\n");
		}
		else
		{
			for(j=0;j<iSize;j++)
			{
				printf("%d\t",arr[j]);
			}
			printf("\n");
		}
	}

}
// 3. Write a program which print below pattern as
///////////////////////////////////////////
//
//  Input :    18  78  45  88  66  77 
//                  6
// 
//  18  78  88  66 
//  18  78  88  66 
//  18  78  88  66 
//  18  78  88  66 
//  18  78  88  66 
//  18  78  88  66
///////////////////////////////////////////
void Pattern3(int arr[], int iSize)
{
int i=0,j=0;
for(i=0;i<iSize;i++)
{
	for(j=0;j<iSize;j++)
	{
		if(((j+1)%3)!=0)
		{
			printf("%d\t",arr[j]);
		}
	}
	printf("\n");
}
}
// 4. Write a program which print below pattern as
///////////////////////////////////////////
//
//
// Input :89   11   45   78 
//////////4
//


//
// Output
//   17   2   9   15  
//   17   2   9   15              
//   17   2   9   15  
//   17   2   9   15  
//
///////////////////////////////////////////
void Pattern4(int arr[], int iSize)
{
int i=0,j=0,k=0,iNo=0;
	
	for(i=0;i<iSize;i++)
	{
		for(j=0;j<iSize;j++)
		{
		k=arr[j];
		iNo=k%10;
		k=k/10;
		iNo=k+iNo;
		printf("%d\t",iNo);
		}
		printf("\n");
	}
}
// 5. Write a program which print below pattern as
///////////////////////////////////////////
// Input :89   11   45   78 
//////////4
//  Output 
//   17   2   9   15  
//   17   0   0   15              
//   17   0   0   15  
//   17   2   9   15 


void Pattern5(int arr[], int iSize)
{
	int i=0,j=0,k=0,iNo=0;
	for(i=0;i<iSize;i++)
	{
		for(j=0;j<iSize;j++)
		{
		k=arr[j];
		iNo=k%10;
		k=k/10;
		iNo=k+iNo;
		if(((j>0 && j<iSize-1) && (i>0 && i<iSize-1)))
			printf("00\t");
		else
		printf("%d\t",iNo);
		}
		printf("\n");
	}
}
///////////////////////////////////////////
int main()
{
BOOL Running = TRUE;
int *ptr = NULL;
int iLength = 0,i = 0,iChoice = 0;
printf("\n-- Marvellous Innfosystems : Array Pattern Printing Application --\n\n");
printf("Enter number of Elements : \t");
scanf("%d",&iLength);
ptr = (int *)malloc(iLength * sizeof(int));
if(NULL == ptr)
{
printf("Error in memory allocation\n");
return -1;
}
for(i = 0; i< iLength; i++)
{
printf("Enter elemennt no : %d\t",i+1);
scanf("%d",&ptr[i]);
}
while(Running)
{
printf("\nEnter your choice\n");
scanf("%d",&iChoice);
switch(iChoice)
{
case 1:
Pattern1(ptr,iLength);



break;
case 2:
Pattern2(ptr,iLength);
break;
case 3:
Pattern3(ptr,iLength);
break;
case 4:
Pattern4(ptr,iLength);
break;
case 5:
Pattern5(ptr,iLength);
break;
case 0:
Running = FALSE;
break;
default:
printf("Wrong choice\n");
break;
}
}
printf("\nTerminating Pattern printing Application....\n");
return 0;
}


