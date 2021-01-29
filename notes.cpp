//WAP to accept amount and print number of notes?//50,500,1000?
#include<iostream>
using namespace std;
int main()
{
	int amt,a,b,c;
	cout<<"enter amount to print number of notes";
	cin>>amt;
	   if(amt%50==0)
	{
	     if(amt>=1000)
	    {
	   	a=amt/1000;
	   	amt=amt-(a*1000);
	   	cout<<"1000 rupees notes are: "<<a<<"\n";
	    }
		  if(amt>=500)
		{
			b=amt/500;
			amt=amt-(b*500);
			cout<<"500 rupees notes are: "<<b<<"\n";
		}
		 if(amt>=50)
		 {
		 	c=amt/50;
		 	amt=amt-(c*50);
		 	cout<<"50 rupees notes are: "<<c<<"\n";
		 }
			
	}
return 0;
}
