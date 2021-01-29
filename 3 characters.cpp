// Write a Cpp program to input any character and check whether it is alphabet, digit    or special character.
#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"enter character to check alphabet or digit or special character";
	cin>>ch;
	if(ch>='a'&& ch<='z')
	{
		cout<<"alphabet";
	}
    else if(ch>='1'&& ch<='10000')
	{
		cout<<"digits";
	}
	else
	{
	cout<<"special character";	
	}
	return 0;
}
