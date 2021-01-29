// Write a Cpp program to input basic salary of an employee and calculate its Gross     salary according to following:
    //Basic Salary <= 10000 : HRA = 20%, DA = 80%
    //Basic Salary <= 20000 : HRA = 25%, DA = 90%
    //Basic Salary > 20000 : HRA = 30%, DA = 43%
    #include<iostream>
    using namespace std;
    int main()
    {
	    int basicsalary,hra,da,gs;
    	cout<<"enter basicsalary";
    	cin>>basicsalary;
    	if(basicsalary<=10000)
    	{
    		hra=(basicsalary/100)*20;
    		da=(basicsalary/100)*80;
    		gs=hra+da+basicsalary;
    		cout<<"hra value is: "<<hra<<"\n";
    		cout<<"da value is: "<<da<<"\n";
    		cout<<"gs value is: "<<gs<<"\n";
		}
		else if(basicsalary<=20000)
		{
			hra=(basicsalary/100)*25;
			da=(basicsalary/100)*90;
			gs=hra+da+basicsalary;
			cout<<"hra value is: "<<hra<<"\n";
    		cout<<"da value is: "<<da<<"\n";
    		cout<<"gs value is: "<<gs<<"\n";
		}
		else if(basicsalary>20000)
		{
			hra=(basicsalary/100)*30;
			da=(basicsalary/100)*43;
			gs=hra+da+basicsalary;
			cout<<"hra value is: "<<hra<<"\n";
    		cout<<"da value is: "<<da<<"\n";
    		cout<<"gs value is: "<<gs<<"\n";
		}
return 0;
	}
    
