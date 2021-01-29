

//WAP to accept withdraw amount nd print no.of notes?10 20 50 100,500,2000?
#include<stdio.h>
void main()
{
	int amt,a,b,c,d,e,f;
	printf("enter withdraw amt");
	scanf("%d",&amt);
	if(amt%10==0)
	{
		if(amt>=2000)
		{
			e=amt/2000;
			amt=amt-(e*2000);
			printf("2000 rupees notes are:%d\n",e);		
		}
		if(amt>=500)
		{
			f=amt/500;
			amt=amt-(f*500);
			printf("500 rupees notes are:%d\n",f);
		}
		if(amt>=100)
		{
			a=amt/100;
			amt=amt-(a*100);
			printf("100 rupees notes are:%d\n",a);
		}
		if(amt>=50)
		{
			b=amt/50;
			amt=amt-(b*50);
			printf("50 rupees notes are:%d\n",b);
		}
		if(amt>=20)
		{
			c=amt/20;
			amt=amt-(c*20);
			printf("20 rupes notes are:%d\n",c);
		}
		if(amt>=10)
		{
			d=amt/10;
			amt=amt-(d*10);
			printf("10 rupees notes are:%d\n",d);
		}
	}
		else
		{
			printf("invalid amount");
		}
	
}
