// Write a Cpp program to input any alphabet and check whether it is vowel or consonant.
#include<iostream>
using namespace std;
int main()
{
	char alpha;
	cout<<"enter alphabet to check vowel or not";
	cin>>alpha;
	if(alpha=='a' ||alpha=='e' ||alpha=='i' ||alpha=='o' ||alpha=='u')
	{
		cout<<"vowel";
	}
	else
	{
		cout<<"consonant";
	}
return 0;
}
