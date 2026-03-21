#include<stdio.h>
struct student
{
	int marks;
};
int main()
{
	struct student s[100];
	int n,i,total=0;
	float average;
	printf("enter n value");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n enter student %d marks:",i+1);
		scanf("%d",&s[i].marks);
		total=total+s[i].marks;
	}
	average=(float)total/n;
	printf("\ntotal=%d\naverage=%f",total,average);
	return 0;
}
