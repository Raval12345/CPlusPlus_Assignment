
/*                              MODULE 3.2(PROGRAMMING WITH C++)

             Define a class to represent a bank account. Include the following members:
             
             Class : Account
 
 1. Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account

2. Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance

*/

#include<iostream>
using namespace std;

class account
{
	char A_Name[50];
	int A_Number;
	char A_Type[30];
	int A_Amount;
	
	public :
	
	void getdata()
	{
		cout<<"\n\n\t"<<"Enter A Account Holder Name: ";
		cin>>A_Name;
		cout<<"\n\n\t"<<"Enter A Account Number: ";
		cin>>A_Number;
		cout<<"\n\n\t"<<"Enter A Account Type: ";
		cin>>A_Type;
		cout<<"\n\n\t"<<"Enter A Account Balance: ";
		cin>>A_Amount;
	}
	
	void printdata()
	{
		cout<<"\n\n\t Account Holder Name: "<<A_Name;
		cout<<"\n\n\t Account Number : "<<A_Number;
		cout<<"\n\n\t Account Type : "<<A_Type;
		cout<<"\n\n\t Account Balance: "<<A_Amount;
	}
};

main()
{
	account a;
	
	a.getdata();
	a.printdata();
}
