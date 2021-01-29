// WAP to print even numbers between 1-n
#include<stdio.h>
void main()
{
	int i,n;
	printf("enter n value");
	scanf("%d",&n); 
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("%d",i);
	    }  
    }
}
