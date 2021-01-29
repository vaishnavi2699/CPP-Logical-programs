//WAP to cpp program to find maximum between three numbers?
#include<iostream>
using namespace std;
int main()
{
	int num1,num2,num3;
	cout<<"enter three number to check maximim number";
	cin>>num1;
	cin>>num2;
	cin>>num3;
	if(num1>=num2)
	{
	cout<<" num 1 is maximum number"<<num1;
	}
	if(num2>=num3)
	{
	cout<<" num 2 is maximum number"<<num2;	
	}
	else
	{
	cout<<" num 3 is maximum number"<<num3;
	}
	return 0;
}
