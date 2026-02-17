#include<stdio.h>
struct student
{
	int roll;
	char name[20];
	struct dob
	{
		int day,month,year;
	}d;
}s1;
int main()
{
	printf("\nenter student roll number:");
	scanf("%d",&s1.roll);
	printf("\nenter student name:");
	scanf("%d",&s1.name);
	printf("\nenter student date of birth in the format(dd-mm-yy)");
	scanf("%d %d %d",&s1.d.day,&s1.d.month,&s1.d.year);
	printf("\nstudent roll=%d\nstudent name=%s\nstudent date of birth:%d-%d-%d",s1.roll,s1.name,s1.d.month,s1.d.year);
	return 0;
}
		

