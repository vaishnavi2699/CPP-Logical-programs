//WAP to accept 3 numbers from user and print big number.
#include<iostream>
using namespace std;
int main()
{
	int num1,num2,num3;
	cout<<"enter 3 numbers";
	cin>>num1;
	cin>>num2;
	cin>>num3;
	if(num1>num2 && num1>num3)
	{
		cout<<"num1 is big number: "<<num1;
	}
	else if(num2>num3)
	{
		cout<<"num2 is big number: "<<num2;
	}
	else
	{
		cout<<"num3 is big number: "<<num3;
    }
return 0;
}
