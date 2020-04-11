#include<stdio.h>
#include<math.h>
int main()
{
	int a[10][3];
	for(int i=0;i<5;i++)
	{
		printf("enter marks of student %d\n",i);
		for(int j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	;
	   int big=a[0][0];
	   for(int j=0;j<3;j++)
	{
		
		for(int i=1;i<5;i++)
		{
			if(a[i][j]>big)
			{
				big=a[i][j];
			}
		}
		printf("highest marks in subject %d is %d\n",j,big);
		big=a[0][j+1];
	}
}
	

	
	
	


