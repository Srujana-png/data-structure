#include<stdio.h>
struct time
{
	int hours:6;
	int min:7;
	int sec:7;
};
int main()
{
	struct time t1;
	int temp;
	printf("\nenter hours:");
	scanf("%d",&temp);
	t1.hours=temp;
	printf("\nenter minutes:");
	scanf("%d",&temp);
	t1.min=temp;
	printf("\nenter seconds:");
	scanf("%d",&temp);
	t1.sec=temp;
	printf("\n%dhh:%dmm:%dss",t1.hours,t1.min,t1.sec);
	return 0;
}

