void main()
{
	int internal,external,project;
	int total;
	printf("Enter internal score ");
	scanf("%d",&internal);
	printf("Enter external score ");
	scanf("%d",&external);
	printf("Enter project score ");
	scanf("%d",&project);
	if(internal>=50 && external>=50 && project>=50)      // 57 67 65   45.5+13.4+5.7
	{
	  total=(project*70)/100+(external*20)/100+(internal*10)/100;
	  printf("Total score: %d \n",total);
	  if(total>=90)
	  {
	  	printf("A grade ");
	  	
	  }
	  else if(total>=70)
	  {
	  	printf("B grade");
	  }
	  else
	  {
	  	printf("C grade");
	  }
	}
	else
	{
		if(internal<50)
		{
			printf("you got falied in internals and score is : %d \n ",internal);
		}
		if(external<50)
		{
			printf("you got falied in externals and score is : %d \n ",external);
		}
		if(project<50)
		{
			printf("you got falied in project and score is : %d \n ",project);
		}
	}
}
