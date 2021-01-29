//WAP to accept 3 subjects marks and find total marks and avg marks.
void main()
{
	int num1,num2,num3,total=0,avg=0;
	printf("enter 3 subject marks");
	scanf("%d%d%d",&num1,&num2,&num3);
	total=num1+num2+num3;
	avg=total/3;
	printf("total marks are:%d\n",total);
	printf("avg marks are:%d\n",avg);
}
