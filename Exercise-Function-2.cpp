//Muhammad Fawwaz Fahmi bin Mohd Kafii
//A17DW0064
#include <iostream>
using namespace std;

int sum(int x,int y)
{
	int result;
	result = x+y;
	return result;

}
int main()
{
	int x,y,sumLog;
	cout << "Enter two values. " << endl;
	cin >> x >> y;
	sumLog= sum(x,y);
	cout << endl << "The result is : " << sumLog;

}
