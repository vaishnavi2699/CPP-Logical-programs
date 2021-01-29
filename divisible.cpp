// Write a Cpp program to check whether a number is divisible by 5 and 11 or not.
#include<iostream>
using namespace std;
  int main()
{
	int  num;
	cout<<"enter number to check divisible by 5 nd 11 or not";
	cin>>num;
	if(num%5==0)
	{
		printf("Divisible \n");
	}
	if(num%11==0)
	{
		printf("Divisible \n");
	}
	else
	{
		printf("not divisible"); 
	}
	return 0;
}
