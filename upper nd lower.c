// Write a C program to check whether a character is uppercase or lowercase     alphabet.char
#include<stdio.h>
void main()
{
	char ch;
	printf("enter character to check uppercase or lowercase: ");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z')
	{
		printf("uppercase letter");
	}
  else	if(ch>='a' && ch<='z')
	{
		printf("lowercase letter");
	}
}
