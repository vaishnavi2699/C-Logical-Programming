//WAP to accept number and print sum of even and sum of odd digits?
#include<iostream.h>
using namespace std;
int main()
{
	int num,rem,evensum,oddsum=0;
	cout<<"enter number to check sum of even nd odd digits";
	cin>>num;
	while(num!=0)
	{
		rem=num%10;
		if(rem%2==0)
		{
			evensum=evensum+rem;
		}
		else
		{
			oddsum=oddsum+rem;
		}
		cout<<"sum of even digits: "<<" \t";
		cout<<"sum of odd digits: "<<" \t";
		
		return 0;
	}
}

