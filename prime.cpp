//WAP to accept number nd print primenumbers?
#include<iostream>
using namespace std;
int main()
{
	int i=1,num,count=0;
	cout<<"enter number to check prime number or not";
	cin>>num;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			count++;
		}
    }
		if(count==2)
		{
			cout<<"prime number"<<"\n";
		}
		else
		{
			cout<<"not a prime number";
		}
return 0;
}
