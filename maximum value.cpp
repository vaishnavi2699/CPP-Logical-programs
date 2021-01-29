// WAP to accept n values and find max value.
#include<iostream>
using namespace std;
int main()
{
	int arr[100],i,n,max=0;
	cout<<"HOW MANY VALUES DO U WANT TO ENTER: ";
	cin>>n;
	while(i<n)
	{
		cin>>arr[i];
       if(max<arr[i])
	{
    	max=arr[i];
	}
	i++;
    }
cout<<"maximum value is: "<<max;
return 0;
}
