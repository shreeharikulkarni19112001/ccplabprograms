#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	struct employee
	{
	    char name[50];
	    char emp_id[50];;
		float salary;
		char grade[20];
	};
	struct employee e;
	printf("enter the name of employee\n");
	scanf("%s",e.name);
	printf("enter the employee id\n");
	scanf("%s",e.emp_id);
	printf("enter the basic salary of employee\n");
	scanf("%f",&e.salary);
	printf("enter the grade of employee\n");
	scanf("%s",e.grade);
	
	
	printf("******EMPLOYEE DETAILS********\n");
	printf("Name of employee is %s\n",e.name);
	printf("Employee id of employee is %s\n",e.emp_id);
	printf("Salary of employee is %f\n",e.salary);
	printf("Grade of employee is %s\n",e.grade);
}
	
