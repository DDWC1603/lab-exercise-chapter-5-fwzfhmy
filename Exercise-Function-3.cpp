//Muhammad Fawwaz Fahmi bin Mohd Kafii
//A17DW0064
#include <iostream>
using namespace std;

double avg(double x,double y);

int main()
{
	double v1=0.0;
	double v2=0.0;
	double result;

	cout<<"Enter first number"<<endl;
		cin >> v1;
	cout<<"Enter second number"<<endl;
		cin >> v2;

			result = avg(v1,v2);
	cout<<"Average is: "<< result <<endl;
}

double avg(double x,double y)
{
	double average;

	average = (x+y)/2;

		return average;

}
