#include<stdio.h>
void display(int a, float b);
struct  student
{
	int roll;
	float marks;
};
int main()
{
	struct student s;
	printf("\nenter student roll number:");
	scanf("%d",&s.roll);
	printf("\nenter student marks:");
	scanf("%f",&s.marks);
	display(s.roll,s.marks);
	return 0;
}
void display(int a, float b)
{
	printf("\nstudent roll number:%d\nstudent marks: %f",a,b);
}
