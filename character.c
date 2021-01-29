// Write a C program to check whether a character is alphabet or not.
#include<stdio.h>
void main()
{
	char ch;
	printf("enter character to check alphabet or not");
	scanf("%c",&ch);
	if(ch>='a' && ch<='z' )
	{
    	printf("character");	
	}
	else if(ch>='A' && ch<='Z' )
	{
    	printf("character");
	}
    else
    {
   	    printf("not a character");
    }
}
