#include<iostream>
using namespace std;
int main()
{
	int arr[100],pos=0,value=0,i,n;
	cout<<"Enter n value ";
	cin>>n;
	cout<<"Enter "<<n<<" values";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter position in array to update value: ";
	cin>>pos;
	if(pos<n)
	{
	cout<<"enter value: ";
	cin>>value;
	arr[pos]=value;
    }
    else if(pos>n)
    {
    cout<<"invalid position"<<"\n";
	}
     for(i=0;i<n;i++)
     {
     	cout<<arr[i]<<"\t";
	 }
return 0;
}
