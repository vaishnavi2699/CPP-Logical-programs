// Write a C program to print day of week name using switch case.
#include<iostream>
using namespace std;
int main()
{
	int week;
	cout<<"enter week num to print day";
	cin>>week;
	switch(week)
	{
		 case 1:
	     cout<<"monday";
	     break;
	     case 2:
	     cout<<"tuesday";
	     break; 
	     case 3:
	     cout<<"wednesday";
	     break;
	     case 4:
	     cout<<"thursday";
	     break;
	     case 5:
	     cout<<"friday";
	     break;
	     case 6:
	     cout<<"saturday";
	     break;
	     case 7:
	     cout<<"sunday";
	     break;
    }
}
