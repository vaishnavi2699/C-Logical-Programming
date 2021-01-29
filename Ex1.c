// WAP to accept marks and print valid or invalid
void main()
{
	int marks;
	printf("Enter your marks to check valid or invalid");
	scanf("%d",&marks);
	if(marks>=0 && marks<=100)
	{
		printf("Valid marks");
	}
	else
	{
		printf("invalid marks");
	}
	
}
