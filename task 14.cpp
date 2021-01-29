//WAP to accept character frm user nd check it is vowel or consonent or special character?
#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"enter alphabet to check vowel or consonant: ";
	cin>>ch;
	if(ch=='a' || ch=='e' || ch=='i' ||  ch=='o' || ch=='u')
	{
		cout<<"vowels";
	}
	else if(ch>='a' && ch<='z')
	{
		cout<<"consonants";
	}
	else
	{
		cout<<"it is not a alphabet";
	}
return 0;
}
