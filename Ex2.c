//WAP to accept 3 numbers from user and print big number.
void main()
{
   int num1,num2,num3;      
   printf("Enter 3 numbers");
   scanf("%d%d%d",&num1,&num2,&num3);
   if(num1>num2 && num1>num3)
   {
   	printf("%d is big number ",num1);
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
