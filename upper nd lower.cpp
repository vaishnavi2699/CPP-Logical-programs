// Write a Cpp program to check whether a character is uppercase or lowercase     alphabet.
#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"enter character to check uppercase or lowercase: ";
	cin>>ch;
	if(ch>='A' && ch<='Z')
	{
		cout<<"uppercase letter";
	}
	if(ch>='a' && ch<='z')
	{
		cout<<"lowercase letter";
	}
	return 0;
}
