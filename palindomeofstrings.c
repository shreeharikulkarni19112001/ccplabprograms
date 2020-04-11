



#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	
	int len=0;
	char str[50];
	printf("enter the string\n");
	gets(str);

	int i=0;
	while(str[i]!='\0')
	{
		len++;
		i++;
	}
	for(int i=0,k=len-1;i<k;i++,k--)
	{
		if(str[i]==str[k])
		{
			printf("string is palindrome\n");
			break;
		}
		else
		{
			printf("string is not a palindrome\n");
			break;
		}
	}
}
