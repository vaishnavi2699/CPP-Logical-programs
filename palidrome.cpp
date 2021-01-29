//WAP to check given number is palindrom number or not.
#include<iostream>
using namespace std;
int main()
{
	int num,rev,rem=0,temp=0;
   cout<<"enter number to check palindrome or not: ";
   cin>>num;
   temp==num;
   while(num!=0)
    {
   	rem=rem%10;
   	rev=rev*10+rem;
   	num=num/10;
    }
 if(rev==temp)
 {
 	cout<<"palindrome";
 } 
 else
 {
 	cout<<"not a palindrome";
 }
 return 0;
 }



