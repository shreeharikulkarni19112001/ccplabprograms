#include<stdio.h>
#include<math.h>
int read(int arr[],int);
int largest(int arr[],int);
int smallest(int arr[],int);
int swap();
int display(int arr[],int);
int a[100];
int big,small,pos,pos1;
int main()
{
	int n;
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("enter the elements of array\n");
	read(a,n);
	printf("largest element of array is\n");
	largest(a,n);
	printf("smallest element of array is\n");
	smallest(a,n);
	printf("after interchaning new valus are\n");
	swap();
	display(a,n);
	return 0;
}
int read(int array[],int x)
{
	int p=x;
	for(int i=0;i<p;i++)
	{
		scanf("%d",&a[i]);
	}
	return 0;
}
int largest(int array[],int x)
{
	int p=x;
	big=a[0];
	for(int i=1;i<p;i++)
	{
		if(a[i]>big)
		{
			big=a[i];
			pos=i;
		}
	}
	printf("%d\n",big);
	return 0;
}
int smallest(int array[],int x)
{
	int p;
	p=x;
	small=a[0];
	for(int i=1;i<p;i++)
	{
		if(a[i]<small)
		{
			small=a[i];
			pos1=i;
			
		}
		
	}
	printf("%d\n",small);
	return 0;
}
int swap()
{
	big=big+small;
	small=big-small;
	big=big-small;
	a[pos]=big;
	a[pos1]=small;
	return 0;
}
int display(int array[],int x)
{
	int p=x;
	printf("elemnts of array after interchange are\n");
	for(int i=0;i<p;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
		
	
	                                                             
#include<stdio.h>
#include<math.h>
int read(int arr[],int);
int largest(int arr[],int);
int smallest(int arr[],int);
int swap();
int display(int arr[],int);
int a[100];
int big,small,pos,pos1;
int main()
{
	int n;
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("enter the elements of array\n");
	read(a,n);
	printf("largest element of array is\n");
	largest(a,n);
	printf("smallest element of array is\n");
	smallest(a,n);
	printf("after interchaning new valus are\n");
	swap();
	display(a,n);
	return 0;
}
int read(int array[],int x)
{
	int p=x;
	for(int i=0;i<p;i++)
	{
		scanf("%d",&a[i]);
	}
	return 0;
}
int largest(int array[],int x)
{
	int p=x;
	big=a[0];
	for(int i=1;i<p;i++)
	{
		if(a[i]>big)
		{
			big=a[i];
			pos=i;
		}
	}
	printf("%d\n",big);
	return 0;
}
int smallest(int array[],int x)
{
	int p;
	p=x;
	small=a[0];
	for(int i=1;i<p;i++)
	{
		if(a[i]<small)
		{
			small=a[i];
			pos1=i;
			
		}
		
	}
	printf("%d\n",small);
	return 0;
}
int swap()
{
	big=big+small;
	small=big-small;
	big=big-small;
	a[pos]=big;
	a[pos1]=small;
	return 0;
}
int display(int array[],int x)
{
	int p=x;
	printf("elemnts of array after interchange are\n");
	for(int i=0;i<p;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
		

OUTPUT
	                                                             
enter the size of array
5
enter the elements of array
12
34
56
87
0
largest element of array is
87
smallest element of array is
0
after interchaning new valus are
elemnts of array after interchange are
12 34 56 0 87

------------------
(program exited with code: 0)

Press any key to continue . . .
	
	
