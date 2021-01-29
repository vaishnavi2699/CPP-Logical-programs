//WAP to accept number nd check positive or negstive or zero?
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter number to check positive or negative or zero: ";
	cin>>num;
	if(num==0)
	{
		cout<<"zero";
	}
	if(num>0)
	{
	    cout<<"positive";	
	}
	if(num<0)
	{
		cout<<"negative";
	}
return 0;
}
