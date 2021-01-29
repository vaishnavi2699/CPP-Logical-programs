//sum of even nd odd numbers nd naturalnumbers?
#include<iostream>
using namespace std;
int main()
{
	int i=1,n,sum=0,evensum=0,oddsum=0;
	cout<<"enter n number";
	cin>>n;
	while(i<=n)
	{
		sum=sum+i;
		
     if(i%2==0)
	{
		evensum=evensum+i;
		
	}
	else if(i%2!=0)
	{
		oddsum=oddsum+i;
		
	}
	i++;
    }
    cout<<"sum is: "<<sum<<"\n";
    cout<<"evensum is: "<<evensum<<"\n";
    cout<<"oddsum is: "<<oddsum<<"\n";
return 0;
}


