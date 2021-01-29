//WAP to accept two numbers nd 5 subjects marks nd find total and avg marks?
#include<stdio.h>
void main()
{
	int num1,num2,num3,num4,num5,total,avg;
	printf("enter 5 subject marks");
	scanf("%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5);
	total=num1+num2+num3+num4+num5;
	avg=total/5;
	printf("total marks are:%d\n",total);
	printf("avg marks are:%d",avg);
	
}
