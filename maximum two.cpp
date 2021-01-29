// Write a Cpp program to find maximum between two numbers.
#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	cout<<"enter two number to check maximim number";
	cin>>num1;
	cin>>num2;
	if(num1>=num2)
	{
	printf("maximum number:%d",num1);
	}
	else
	{
	printf("maximum number:%d",num2);
	}
}
