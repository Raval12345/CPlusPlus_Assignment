/*                MODULE 3.2(PROGRAMMING WITH C++)


Write a program to find the multiplication values and the cubic values using inline function


*/

#include<iostream>
using namespace std;

class Math
{
	int n;
	
	public : 
	
	       void getdata(int num)
	       {
	       	n=num;
		   }
	
	       void getvalue(int num)
	         {
	        	n=num;
		   	 }
	         inline int squre()
	         {
	        	return n*n;
			 }
	         inline int cube()
	         {
	        	return n*n*n;
			 }
};

main()
{
	Math M;
	
	int s , c , num;
	
	cout<<"\n\n\t Input A Number : ";
	cin>>num;
	M.getdata(num);
	
	s=M.squre();
	c=M.cube();
	cout<<"\n\n\t Square : "<<s;
	cout<<"\n\n\t Cube  : "<<c;
}
