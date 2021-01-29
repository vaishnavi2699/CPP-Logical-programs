#include<iostream>
using namespace std;
int main()
{
	int i,num=0,fact=1;
	cout<<"enter number to find factorial";
	cin>>num;
	for(i=num;i>0;i--)
	{
		cout<<i;
		fact=fact*i;
		cout<<fact<<"\n";
	}
	cout<<"fact is: "<<fact;
	return 0;
}
