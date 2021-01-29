//WAP to find sum of all digits in given number?
#include<iostream>
using namespace std;
int main()
{
	int num=0,sum=0,rem=0;
	cout<<"enter number to find sum of all digits: ";
	cin>>num;
	while(num!=0)
	{
	 rem=num%10;
	 sum=sum+rem;
	 num=num/10;
	}
	cout<<"sum of digits: "<<sum<<"\t";
	return 0;
}
