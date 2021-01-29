// Write a C program to input electricity unit charges and calculate total     electricity bill according to the given condition:
    //For first 50 units Rs. 0.50/unit
    //For next 100 units Rs. 0.75/unit
    //For next 100 units Rs. 1.20/unit
     //For unit above 250 Rs. 1.50/unit
     //An additional surcharge of 20% is added to the bill
#include<iostream>
using namespace std;
int main()
{
	int units;
	float bill;
    cout<<"enter units to calculate electricity bill";
    cin>>units;
    if(units<=50)
    {
    bill=units*0.50;	
	}
	 elseif(units<=150)
	{
		bill=(units*0.50)+(units-50)*0.75;
	}
	 else if(units<=250)
	{
		bill=(units*0.50)+(units-50)*0.75+(units-100)*1.20;
	}
	 else if(units>250)
	{
	    bill=(units*0.50)+(units-50)*0.75+(units-100)*1.20+(units-150)*1.50;	
	}
	surcharge=(bill/100)*20;
	cout<<"float bill: "<<bill;
	return 0;
}
