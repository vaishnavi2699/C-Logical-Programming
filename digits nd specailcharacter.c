//WAP to  accept input nd find given input is character,digit or special character? //in c
#include<stdio.h>
void main()
{
   char ch;
   printf("enter character to check character or digits or special character: ");
   scanf("%c",&ch);
   if(ch>='a' && ch<='z')
   {
   	 printf("small letter");
   }
   else if(ch>='A' && ch<='Z')
   {
   	 printf("capital letter");
   }
   else if(ch>='1' && ch<='9')
   {
	 printf("digits");
   }
   else 
   {
   	 printf("special character");
   }
   
}
