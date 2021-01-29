// 2000 500 100
void main()
{
	int amt,a,b,c;
	printf("Enter withdraw amount");
	scanf("%d",&amt);
	if(amt%100==0)   //10000
	{
		if(amt>=2000)
		{
			 a=amt/2000;
			 amt=amt-(a*2000);
			 printf("2000 rupees notes are %d \n",a);               
		}
		if(amt>=500)
		{
			 b=amt/500;
			 amt=amt-(b*500);
			 printf("500 rupees notes are %d\n",b);     
		}
		if(amt>=100)
		{
		   c=amt/100;
		   printf("100 rupees notes are %d",c);	
		}
	}
	else
	{
		printf("Invalid amount");
	}
}
