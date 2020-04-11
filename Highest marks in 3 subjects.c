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
	
OUTPUT
	
enter marks of student 0
98 87 86
enter marks of student 1
45 87 89
enter marks of student 2
99 80 85
enter marks of student 3
97 56 91
enter marks of student 4
100 60 50
highest marks in subject 0 is 100
highest marks in subject 1 is 87
highest marks in subject 2 is 91


------------------
(program exited with code: 0)

Press any key to continue . . .
	


