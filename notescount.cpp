// Write a Cpp program to count total number of notes in given amount.//10,20,50,100.
#include<iostream>
using namespace std;
int main()
{
   int amt,a,b,c,d,total;
   cout<<"enter number to print number of notes";
   cin>>amt;
   if(amt%10==0)
   {
   	if(amt>=100)
    	{
   		a=amt/100;
   		amt=amt-(a*100);
   		cout<<"100 rupees notes are: "<<"\n";
        }
	     	if(amt>=50)
   	    {
   		b=amt/50;
   		amt=amt-(b*50);
   		cout<<"50 rupees notes are";
	    }
	     	if(amt>=20)
      	{
   		c=amt/20;
   		amt=amt-(c*20);
   		cout<<"100 rupees notes are";
	    }
	     	if(amt>=10)
   	    {
   		d=amt/10;
   		amt=amt-(d*10);
   		cout<<"100 rupees notes are";
	    }
	    total=a+b+c;
	    cout<<"total number of notes are";
	}
	else
	{
		cout<<"invalid amount";
	}
	return 0;	
}
