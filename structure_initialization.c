# include<stdio.h>
struct student
{
	int roll;
	float marks;
	char name[20];
	char grade;
};
int main()
{
	struct student s = {806,7.40,"sujii",'A'};
	printf("\nstudent roll number:%d\nstudent marks :%f\nstudent name:%s\nstudent grade:%c",s.roll,s.marks,s.name,s.grade);
	return 0;
	
}
