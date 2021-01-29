//basicsalary<=12000 hra=24% da=42%
//basicsalary<=2200 hra=54% da=66%
#include<iostream>
using namespace std;
int main()
{
	int basicsalary,hra,da,gs;
	cout<<"enter basicsalary";
	cin>>basicsalary;
	if(basicsalary<=12000)
	{
		hra=(basicsalary/100)*24;
		da=(basicsalary/100)*42;
		gs=hra+da+basicsalary;
		cout<<"hra is: "<<hra;
		cout<<"da is: "<<da;
		cout<<"gs is: "<<gs; 
    }
    if(basicsalary<=22000)
	{
		hra=(basicsalary/100)*54;
		da=(basicsalary/100)*66;
		gs=hra+da+basicsalary;
		cout<<"hra is: "<<hra<<"\t";
		cout<<"da is: "<<da<<"\t";
		cout<<"gs is: "<<gs; 
    }
    return 0;
 } 
