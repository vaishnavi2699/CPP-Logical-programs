//evensum
#include<iostream>
using namespace std;
int main()
{
	int i=1,n,evensum=0,oddsum=0;
	cout<<"enter n number";
	cin>>n;
	while(i<=n)
	{
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
	    cout<<"evensum: "<<evensum<<"\n";
	    cout<<"oddsum: "<<oddsum;
	     return 0;
}

