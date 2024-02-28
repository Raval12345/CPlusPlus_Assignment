#include<iostream>
using namespace std;

class Calculator
{
	private:
		
	float A, B, C;
	
	public:
		
	   void	GetValues()
		{
			cout<<"Enter First Values: ";
			cin>>A;
			
			cout<<"Enter Second Values: ";
			cin>>B;
			
		}
		
		void Addition()
		{
			C=A+B;
			cout<< C;
		}
		
		void Substraction()
		{
			C=A-B;
			cout<< C;
			
		}
		void Multiplication()
		{
			C=A*B;
			cout<< C;
		}
		void Division()
		{
			C=A/B;
			cout<< C;
		}
	
	
};

int main()
{
	Calculator Calc;
	
	Calc.GetValues();
	
	cout<<"Addition Of Two Numbers : ";
	Calc.Addition();
	cout<<"\n";
	cout<<"Substraction Of Two Numbers : ";
	Calc.Substraction();
	cout<<"\n";
	cout<<"Multiplication Of Two Numbers : ";
	Calc.Multiplication();
	cout<<"\n";
	cout<<"Division Of Two Numbers : ";
	Calc.Division();
	cout<<"\n";
}
