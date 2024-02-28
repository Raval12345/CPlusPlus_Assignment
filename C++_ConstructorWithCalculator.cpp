/*                    MODULE 3.2(PROGRAMMING WITH C++)


Write a program of Addition, Subtraction, Division, Multiplication using constructor.

*/

#include<iostream>
using namespace std;

class Calculator
{
		double num1;
		double num2;
		
	public : 
	
	    Calculator(double n1, double n2)
	    {
		
	    num1=n1;
	    num2=n2;
	    }
	    double adddata()
	    {
	    	return num1+num2;
		}
		
		double subdata()
		{
			return num1-num2;
		}
	    double dividedata()
	    {
	    	return num1/num2;
		}
		double multiplydata()
		{
			return num1*num2;
		}
		
};

main()
{
	
	double num1 , num2 ;
	
	cout<<"\n\n\t Enter First Number : ";
	cin>>num1;
	cout<<"\n\n\t Enter Second number : ";
	cin>>num2;
	
	Calculator C(num1,num2);
	
	cout<<"\n\n\t"<<"Addition : "<<C.adddata();
	cout<<"\n\n\t"<<"Substraction : "<<C.subdata();
	cout<<"\n\n\t"<<"Multiplication : "<<C.multiplydata();
	cout<<"\n\n\t"<<"Division : "<<C.dividedata();
}
