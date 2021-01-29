//WAP to find sum of even digits and odd digits
#include<iostream>
using namespace std;
int main()
{
	int i=1,num,evensum=0,oddsum=0,rem=0;
	cout<<"enter number to find sum of evendigits nd odddigits: ";
	cin>>num;
	while(num!=0)
	{
		rem=num%10;
		if(rem%2==0)
		{
			evensum=evensum+rem;
		}
		else
		{
			oddsum=oddsum+rem;
		}
		num=num/10;
	}	
	cout<<"sum of evendigits: "<<evensum<<"\n";
	cout<<"sum of odddigits: "<<oddsum;
return 0;
}
	
