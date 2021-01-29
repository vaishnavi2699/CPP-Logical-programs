//WAP to find even digits count and odd digits count in a given number
#include<iostream>
using namespace std;
int main()
{
	int num,rem=0,evencount=0,oddcount=0;
	cout<<"enter number to find number of odd nd even digits: ";
	cin>>num;
	while(num!=0)
	{
		rem=num%10;
		if(rem%2==0)
		{
			evencount++;
		}
		else
		{
			oddcount++;
		}
	num=num/10;
	}
	cout<<"number of evendigits: "<<evencount<<"\n";
	cout<<"number of odddigits: "<<oddcount;
	return 0;
}
