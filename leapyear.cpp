// Write a Cpp program to check whether a year is leap year or not.
#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"enter year to check leap year or not";
	cin>>year;
	if(year%400==0)
	{
		cout<<"leapyear";
	}
	else if(year%100==0)
	{
		cout<<"leapyear";
	}
	else if(year%4==0)
	{
		cout<<"leapyear";
	}
	else
	{
		cout<<"not a leapyear";
	}
	return 0;
	
}
