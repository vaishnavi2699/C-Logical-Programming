#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter 1st value");
	scanf("%d",&a);
	printf("enter 2nd value");
	scanf("%d",&b);
	printf("enter 3rd value");
	scanf("%d,&c");
	if(a>=b)
	{
		printf("maximum num is:%d",a);
	}
    else if(b>=c)
	{
		printf("maximum num is:%d",b);
	}
	else
	{
		printf("maximum num is:%d",c);
	}
}
