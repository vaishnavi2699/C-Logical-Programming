// Write a C program to input any alphabet and check whether it is vowel or consonant.
#include<stdio.h>
void main()
{
	char alpha;
	printf("enter alphabet to check vowel or consonant");
	scanf("%c",&alpha);
	if(alpha=='a'|| alpha=='e'|| alpha=='i'|| alpha=='o'|| alpha=='u')
	{
		printf("vowel");
	}
	else
	{
		printf("consonant");
	}
}
