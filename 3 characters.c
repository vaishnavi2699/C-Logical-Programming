// Write a C program to input any character and check whether it is alphabet, digit    or special character.
#include<stdio.h>
void main()
{
	char ch;
	printf("enter character to check alphabet or digit or specail character ");
	scanf("%c",&ch);
	if(ch>='a' && ch<='z')
	{
	   printf("alphabet");
	}
    else if(ch>='1' && ch<='10000')
	{
	   printf("digits");
	}
	else
	{
		printf("special character");
	}
}
