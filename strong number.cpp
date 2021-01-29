// WAP to check given number is strong number or not
#include<iostream>
using namespace std;
int main()
{
	int num,rem,fact=1,i=1,sum=0,temp;
	cout<<"enter number to check strong or not: ";
	cin>>num;
	temp=num;
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
