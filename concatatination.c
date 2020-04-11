

#include<stdio.h>
#include<math.h>
int main()
{
	int len1=0;
	int len2=0;
	char str1[100];
	char str2[100];
	printf("enter the first string\n");
	gets(str1);
	printf("enter the second string\n");
	gets(str2);
    int i=0;
	while(str1[i]!='\0')
	{
		len1++;
		i++;
	}
    int j=0;
	while(str2[j]!='\0')
	{
		len2++;
		j++;
	}
	
	char str3[50];
	for(int i=0;i<len1;i++)
	{
		str3[i]=str1[i];
	}
	for(int i=0;i<len2;i++)
	{
		str3[len1+i]=str2[i];
	}
	printf("concatenated string is\n");
	
		for(int i=0;i<len1+len2;i++)
		{
			if(str3[i]!='\0')
			{
				printf("%s",str3);
				break;
			}
			
		}
	}
	

