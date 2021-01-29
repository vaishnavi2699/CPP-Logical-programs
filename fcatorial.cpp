//factorial number
#include<iostream>
using namespace std;
void strong()
{
	int i=1,num,fact=1;
	cout<<"enter number to find factorial: ";
	cin>>num;
	for(i=1;i<=num;i++)
	{
		while(num>0)
		{
			fact=fact*num;	
			num--;
		}
    }
    cout<<"fact is: "<<fact;
}
int main()
{
	factorial();
	return 0;
}
