//WAP to accept number nd check it is palidrome number or not?
#include<iostream>
using namespace std;
int main()
{
	int num,rev=0,rem,temp;
	cout<<"enter number to check palindrome number or not: ";
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
	cout<<"palindrome number";
}
else
{
	cout<<"not a palindrome number";
}
return 0;
}
