// Write a Cpp program to check whether a number is even or odd.
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter number to check even or odd number";
	cin>>num;
	if(num%2==0)
	{
		printf("evennumber");
	}
	else
	{
		printf("oddnumber");
	}
}
