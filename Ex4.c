// WAP to accept number and check it is even or odd.
void main()
{
	int num;
	printf("Enter number to check even or odd");   
	scanf("%d",&num);
	if(num==0)
	{
		printf("Zero");
	}
	else if(num%2==0)  
	{
		printf("Even number");
	}
	else
	{
		printf("Odd number");
	}
}
