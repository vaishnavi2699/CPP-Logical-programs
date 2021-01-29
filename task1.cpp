//WAP to check given number is palindrom number or not.
#include<iostream>
using namespace std;
int main()
{
	int num,rev=0,rem,temp;
	cout<<"Enter number to check palindrom or not";
	cin>>num;
	temp=num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;    
	}
	if(rev==temp)
	{
		cout<<"Palindrom number ";
	}
	else
	{
		cout<<"Not a palindrom ";
	}
	
	
	return 0;
}
