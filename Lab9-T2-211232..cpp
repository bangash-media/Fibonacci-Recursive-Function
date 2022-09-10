#include <iostream>
/*printing n numbers in a Fibonacci sequence using Recursion*/
using namespace std;

int fibi(int terms,int num1,int num2); //function defination

int main() 
{
	int terms,num1=0,num2=1;
    cout<<"Enter the number of terms in series : "; cin >> terms;
    if (terms==0) //if 0 no. of terms are entered
    cout<<"\nFibonnaci Series: ";
	else if(terms==1) //if 1 no. of terms are entered
    cout<<"\nFibonnaci Series: "<<num1;
    else if (terms==2) //if 2 no. of terms are entered
    cout<<"\nFibonnaci Series: "<<num1<<", "<<num2;
    else if (terms>=3) //if no of terms grater than 2 are entered
    cout<<"\nFibonnaci Series: "<<num1<<", "<<num2;
	fibi(terms,num1,num2); //function call
	return 0;
}
int fibi(int terms,int num1,int num2) //funtion defination
{
	int change;
	if (terms>=3) //if statement for no. of times of execution of function defination
	{
		terms--; //decreaments will lead to termination.
		change=num1+num2;
		num1=num2;
		num2=change;
		cout<<", "<<num2;
		return fibi(terms,num1,num2); //self call
	}
	else 
	return 0;
}
