// Write a Cpp program to check whether a character is alphabet or not.
#include<iostream>
using namespace std;
int main()
{
	char ch;
    cout<<"enter character to check alphabet or not";
    cin>>ch;
    if(ch>='a' && ch<='z')
    {
    	cout<<"character";
	}
    else if(ch>='A' && ch<='Z')
    {
    	cout<<"character";
	}
	else
	{
		cout<<"not a character";
	}
	return 0;
	
}
