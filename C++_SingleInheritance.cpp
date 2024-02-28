/*                                   MODULE 3.2(PROGRAMMING WITH C++)

Assume a class cricketer is declared.
Declare a derived class batsman from cricketer.
Data member of batsman.
 1 Total runs, 
 2 Average runs and 
 3 best performance. 
Member functions 
 1 input data, 
 2 calculate average runs, 
 3 Display data. (Single Inheritance)

*/

#include<iostream>
using namespace std;



class cricketer
{  
		protected:
            	string Name;
	            int Age;
	
	public:
	            void InputData()
				{
					cout<<"\t\t\n"<<"Enter Name : ";
					cin>>Name;
					cout<<"\t\t\n"<<"Enter Age : ";
					cin>>Age;
					
				}
				
                void ShowData()
                {
                	cout<<"Name : "<<Name<<"\t\t\n";
                	cout<<"Age : "<<Age<<"\t\t\n";
				}
	
};

class batsman : public cricketer
{
	int TotalRuns;
	double AverageRuns;
	int BestPerformance;
	
	public :
		void InputDriveData()
		{
			cout<<"\t\t\n"<<"Enter Total Runs : ";
			cin>>TotalRuns;
			cout<<"\t\t\n"<<"Enter Average Runs : ";
			cin>>AverageRuns;
			cout<<"\t\t\n"<<"BestPerformance : ";
			cin>>BestPerformance;
			
		}
		void ShowDriveData()
		{
			cout<<"Total Runs : "<<TotalRuns<<"\t\t\n";
			cout<<"Average Runs : "<<AverageRuns<<"\t\t\n";
			cout<<"Best Performance : "<<"\t\t\n"<<BestPerformance;
		}
};

main()
{
	batsman B;
	B.InputData();
	B.InputDriveData();
	B.ShowData();
	B.ShowDriveData();
}
