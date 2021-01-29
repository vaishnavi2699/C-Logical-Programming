// Write a C program to input basic salary of an employee and calculate its Gross     salary according to following:
    //Basic Salary <= 10000 : HRA = 20%, DA = 80%
   // Basic Salary <= 20000 : HRA = 25%, DA = 90%
   // Basic Salary > 20000 : HRA = 30%, DA = 70%
#include<stdio.h>
void main()
{
int basic,hra,da,gs;
printf("enter basicsalary");
scanf("%d",&basic);
      if(basic<=10000)
      {
      	hra=(basic/100)*20;
      	da=(basic/100)*80;
      	gs=hra+da+basic;
      	printf("hra is:%d\n",hra);
      	printf("da is:%d\n",da);
      	printf("gs is:%d\n",gs);
	  }
	  else if(basic<=20000)
	  {
	  	hra=(basic/100)*25;
	  	da=(basic/100)*90;
	  	gs=hra+da+basic;
	  	printf("hra is:%d\n",hra);
      	printf("da is:%d\n",da);
      	printf("gs is:%d\n",gs);
	  }
	   else if(basic>20000)
	  {
	  	hra=(basic/100)*30;
	  	da=(basic/100)*70;
	  	gs=hra+da+basic;
	  	printf("hra is:%d\n",hra);
      	printf("da is:%d\n",da);
      	printf("gs is:%d\n",gs);
	  }
	  
}
