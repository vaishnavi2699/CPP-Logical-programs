// Write a C program to input basic salary of an employee and calculate its Gross     salary according to following:
    //Basic Salary <= 10000 : HRA = 20%, DA = 80%
   // Basic Salary <= 20000 : HRA = 25%, DA = 90%
   // Basic Salary > 20000 : HRA = 30%, DA = 70%
#include<stdio.h>
void main()
{
int basic;
printf("enter basicsalary");
scanf("%d",&basic);
      if(basic<=10000)
      {
      	hra=(basicsalary/100)*20;
      	da=(basicsalary/100)*80;
      	gs=hra+da+basicsalary;
      	printf("hra is:%d\n",hra);
      	printf("da is:%d\n",da);
      	printf("grosssalary is:%d\n",grosssalary);
	  }
	  else if(basic<=20000)
	  {
	  	hra=(basicsalary/100)*25;
	  	da=(basicsalary/100)*90;
	  	gs=hra+da+basicsalary;
	  	printf("hra is:%d\n",hra);
      	printf("da is:%d\n",da);
      	printf("grosssalary is:%d\n",grosssalary);
	  }
	   else if(basic>20000)
	  {
	  	hra=(basicsalary/100)*30;
	  	da=(basicsalary/100)*70;
	  	gs=hra+da+basicsalary;
	  	printf("hra is:%d\n",hra);
      	printf("da is:%d\n",da);
      	printf("grosssalary is:%d\n",grosssalary);
	  }
	  
}
