// WAP to find sum of even numbers between 1-n
#include<iostream>
using namespace std;
int main()
{
	int i=1,n,evensum=0;
	cout<<"enter n number";
	cin>>n;
	while(i<=n)
	{
	  if(i%2==0)
	  {
	  	evensum=evensum+i;
	  }
	i=i+1;
	}
	cout<<"evensum is: "<<evensum;
return 0;
}

