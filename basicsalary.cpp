//basicsalary<=10000,hra=35%,da=60%
//basicsalary<=20000,hra=55%,da=70%
//basicsalary<=30000,hra=65%,da=80%
//asicsalary between 30000 to 40000,hra=75%,da=85%
//basicsalary>40000,hra=80%,da=90%
#include<iostream>
using namespace std;
int main()
{
	int basicsalary,hra,da,gs;
	cout<<"enter basicsalary";
	cin>>basicsalary;
    	if(basicsalary<=10000)
	{
		hra=(basicsalary/100)*35;
		da=(basicsalary/100)*60;
		gs=hra+da+basicsalary;
		cout<<"hra is: "<<hra<<"\n";
		cout<<"da is: "<<da<<"\n";
		cout<<"gs is: "<<gs<<"\n";
	}
	   else if(basicsalary<=20000)
	{
	    hra=(basicsalary/100)*55;
	    da=(basicsalary/100)*70;
	    gs=hra+da+basicsalary;
		cout<<"hra is: "<<hra<<"\n";
		cout<<"da is: "<<da<<"\n";
		cout<<"gs is: "<<gs<<"\n";	    	
	}
	   else if(basicsalary<=30000)
	{
		hra=(basicsalary/100)*65;
		da=(basicsalary/100)*80;
		gs=hra+da+basicsalary;
		cout<<"hra is: "<<hra<<"\n";
		cout<<"da is: "<<da<<"\n";
		cout<<"gs is: "<<gs<<"\n";
	}
	   else if(basicsalary>=30000 && basicsalary<=40000)
	{
		hra=(basicsalary/100)*75;
		da=(basicsalary/100)*85;
		gs=hra+da+basicsalary;
		cout<<"hra is: "<<hra<<"\n";
		cout<<"da is: "<<da<<"\n";
		cout<<"gs is: "<<gs<<"\n";
	}
	   else if(basicsalary>40000)
	{
		hra=(basicsalary/100)*80;
		da=(basicsalary/100)*90;
		gs=hra+da+basicsalary;
		cout<<"hra is: "<<hra<<"\n";
		cout<<"da is: "<<da<<"\n";
		cout<<"gs is: "<<gs<<"\n";
	}
              return 0;   
	      
	
}

