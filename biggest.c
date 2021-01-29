//WAP to accpet three numbers frm user nd print biggest number?
#include<stdio.h>
void main()
{	
int num1,num2,num3;
printf("enter ur 3 numbers to check biggest number");
scanf("%d%d%d",&num1,&num2,&num3);
if(num1>num2 && num1>num3)
{
	printf("%d is big number",num1);
}
else if(num2>num3)
{
    printf("%d is big number",num2);
	}
	else
	{
		printf("%d is big number",num3);
	}
}
