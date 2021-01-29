// WAP to print even numbers between 1-n
void main()
{
	int i,n;
	printf("Enter n value");
	scanf("%d",&n);   //100
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("%d\t",i);
		}
	}
	
}
