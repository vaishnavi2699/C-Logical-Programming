// WAP to accept number and print number of factors:
void main()
{
	int i,num,fc=0;
	printf("Enter number to find factors: ");
	scanf("%d",&num);
	for(i=1;i<=num/2;i++)
	{
		if(num%i==0)
		{
			fc++;
			printf("%d\t",i);
		}
	}
	printf("\n number of factors: %d\n",fc);
}
