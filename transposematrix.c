

#include<stdio.h>
#include<math.h>
int m;
int n;
int main()
{
    int a[3][3];
    printf("enter the number of column\n");
    scanf("%d",&m);
    printf("enter the number of rows\n");
    scanf("%d",&n);
	printf("enter the elements of matrix\n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
		printf("elements of array are\n");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("elements of transposed matrix are\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
}
OUTPUT
enter the number of column
2
enter the number of rows
3
enter the elements of matrix
1 2 3
4 5 6
elements of array are
1 2 3
4 5 6
elements of transposed matrix are
1 4
2 5
3 6


------------------
(program exited with code: 0)

Press any key to continue . . .
