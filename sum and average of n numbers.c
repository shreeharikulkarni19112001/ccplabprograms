#include<stdio.h>
#include<math.h>
int main()
{
	int a[50];
	int n;
	int sum=0;
	float average;
	printf("enter the value of n\n");
	scanf("%d",&n);
	printf("enter the elements of array\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	average=sum/n;
	printf("sum of n numbers is %d \n",sum);
	printf("average of n numbers is %f \n",average);
}
	
	
