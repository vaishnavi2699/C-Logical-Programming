//WAP to print notes //10 20 50 100 500 1000 2000?
#include<stdio.h>
void main()
{
   int amt,a,b,c,d,e,f,g;
   printf("enter amt to print number of notes");
   scanf("%d",&amt);
if(amt%10==0)
{
	if(amt>=2000)//2500
	{
		a=amt/2000;//a=1
		amt=amt-(a*2000);//2500=2500*(1-2000)==>
		printf("2000 rupees notes are :%d\n",a);
    }
    if(amt>=1000)
	{
		b=amt/1000;
		amt=amt-(b*1000);
		printf("1000 rupees notes are:%d\n",b);
    }
    if(amt>=500)
	{
		c=amt/500;
		amt=amt*(c-500);
		printf(" 500 rupees notes are:%d\n",c);
    }
    if(amt>=100)
	{
		d=amt/100;
		amt=amt-(d*100);
		printf("100 rupees notes are:%d\n",d);
    }
    if(amt>=50)
	{
		e=amt/50;
		amt=amt-(e*50);
		printf("50 rupees notes are:%d\n",e);
    }
    if(amt>=20)
	{
		f=amt/20;
		amt=amt-(f*20);
		printf("20 rupees notes are:%d\n",f);
    }
    if(amt>=10)
	{
		g=amt/10;
		amt=amt-(g*10);
		printf("10 rupees notes are:%d\n",g);
    }
}
    else
    {
    	printf("invalid amount\n");
    	printf("enter valid amount: ");
    	scanf("%d",&amt);
    	if(amt%10==0)
        {
     		if(amt>=2000)
      		{
     			a=amt/2000;
    			amt=amt-(a*2000);
	    		printf("2000 rupees notes are :%d",a);
        	}
    		if(amt>=1000)
			{
				b=amt/1000;
				amt=amt-(b*1000);
				printf("1000 rupees notes are:%d\n",b);
    		}
    		if(amt>=500)
			{
				c=amt/500;
				amt=amt-(c*500);
				printf(" 500 rupees notes are:%d\n",c);
    		}
    		if(amt>=100)
			{
				d=amt/100;
				amt=amt-(d*100);
				printf("100 rupees notes are:%d\n",d);
    		}
    		if(amt>=50)
			{
				e=amt/50;
				amt=amt-(e*50);
				printf("50 rupees notes are:%d\n",e);
    		}
    		if(amt>=20)
			{
				f=amt/20;
				amt=amt-(f*20);
				printf("20 rupees notes are:%d\n",f);
    		}
    		if(amt>=10)
			{
				g=amt/10;
				amt=amt-(g*10);
				printf("10 rupees notes are:%d\n",g);
    		}
		}
		else
		{
			printf("invaild amount\n");
			printf("try again later\n");
			printf("thank you");
		}		
	}
}

