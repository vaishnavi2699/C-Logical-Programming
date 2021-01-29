// Write a C program to input marks of five subjects Physics, Chemistry, Biology,     Mathematics and Computer. Calculate percentage and grade according to     following:
   // Percentage >= 90% : Grade A
   // Percentage >= 80% : Grade B
   // Percentage >= 70% : Grade C
    //Percentage >= 60% : Grade D
   // Percentage >= 40% : Grade E
    #include<stdio.h>
    void main()
    {
    	int physics,chemistry,biology,mathematics,computer,total,percentage;
    	printf("enter physics marks: ");
    	scanf("%d",&physics);
    	printf("enter chemistry  marks: ");
    	scanf("%d",&chemistry);
    	printf("enter biology marks: ");
    	scanf("%d",&biology);
    	printf("enter computer marks: ");
    	scanf("%d",&computer);
    	printf("enter mathematics marks: ");
    	scanf("%d",&mathematics);
    	if(physics>=100 &&  chemistry>=90 && biology>=80 &&  computer>=70 && mathematics>=50)
    	{
        	total=(physics*90)/100+(chemistry*80)/100+(biology*70)/100+(computer*60)/100+(mathematics*40)/100;
    	    printf("total score is:%d\n",total);
    	    if(total>100)
		  {
		  printf("A grade");
		  }
	      else if(total>80)
		  {
		  printf("B grade");
		  }
	      else if(total>70)
		  {
		  printf("C grade");
		  }
		  else if(total>50)
		  {
		  	printf("D grade");
		  }
		  else
		  {
		  	printf("E grade");
		  }
	      }
		  else
		  {
			if(physics<=100)
			{
				printf("you got failed in phyics and score is:%d\n",physics);
			}
			if(chemistry<=90)
			{
				printf("you got failed in chemistry and score is:%d\n",chemistry);
			}
			if(mathematics<=50)
			{
				printf("you got failed in mathematics and score is:%d\n",mathematics);
			}
			if(biology<=80)
			{
				printf("you got failed in biology and score is:%d\n",biology);
			}
			if(computer<=70)
			{
				printf("you got failed in computer and score is:%d\n",computer);
			}	
	    }
    }
