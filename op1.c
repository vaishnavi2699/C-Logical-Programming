void main()
{
	float basicsalary,hra,da,grosssalary;
	printf("enter ur basicsalary");
	scanf("%f",&basicsalary);
	if (basicsalary<=10000)
	{
		hra=(basicsalary*89)/100;
	    da=(basicsalary*70)/100;
	}
	else if(basicsalary<=20000)
	{
		hra=(basicsalary*92)/100;
		da=(basicsalary*75)/100;
	}
	else
	{
		hra=(basicsalary*95)/100;
		da=(basicsalary*80)/100;
	}
	grosssalary=hra+da+basicsalary;
	printf("hra :%f\n",hra);
	printf("da :%f\n",da);
	printf("gross salary :%f\n",grosssalary);
}

