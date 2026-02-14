#include<stdio.h>
void display(struct student a);
struct student
{
	int roll;
	float marks;
};
int main()
{
	struct student s;
	printf("\nenter student roll number:");
	scanf("%d",&s.roll );
	printf("\nenter student marks:");
	scanf("%f",&s.marks);
	display(s);
	return 0;
}
void display(struct student a)
{
	printf("\nstudent roll number=%d\nstudent marks=%f",a.roll,a.marks);
}
