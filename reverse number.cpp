// WAP to print reverse of a given number
// input : 2651    output : 1562
#include<iostream>
using namespace std;
int main()
{
	int num,rem,rev=0;
	cout<<"enter number to find reverse of a  given number";
	cin>>num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	cout<<"reverse number is: "<<rev;
}
