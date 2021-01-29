//WAP to find number of digits in a given number;
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter number to  find digits";
	cin>>num;
	while(num!=0)
	{
		num=num/10;
		digits++;
	}
	cout<<"number of digits: "<<digits;
return 0;	
}
