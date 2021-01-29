//strong or not?
#include<iostream>
using namespace std;
int main()
{
	int num,sum=0,rem,temp,i=1,fact=1;
	cout<<"enter number to check strong number or not";
	cin>>num;
	while(num!=0)
	{
		rem=num%10;
		while(i<=rem)
		{
		fact=fact*rem;
		rem--;	
		}
	sum=sum+fact;
	num=num/10;
	fact=1;
	}
if(sum==temp)
{
	cout<<"strong number";
}
else
{
	cout<<"not a strong number";
}
return 0;
}
