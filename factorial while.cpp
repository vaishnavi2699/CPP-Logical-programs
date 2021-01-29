// WAP to print factorial of a given number
#include<iostream>
using namespace std;
int main()
{
	int i=1,num=0,fact=1;
	cout<<"enter number to find factorial: ";
	cin>>num;
	while(i<=num)
	{
		fact=fact*num;
		num--;
	}
	cout<<"factorail is: "<<fact;
	return 0;
}
