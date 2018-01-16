//Muhammad Fawwaz Fahmi bin Mohd Kafii
//A17DW0064
#include <iostream>
using namespace std;

void masuk_tak()
{
	char ans,c;

	cout<<endl<<"Dia shoot masuk tak? (answer y-yes atau n-tidak"<<endl;

		ans=' ';
	while(c!='y' && c!='n')
	{
		cin>>c;

			if(c!='n' && c!='y'){
				cout<<endl<<"cakap lah bebetul, try again: "<<endl;}
	}
	if(c=='n')
	{
				cout<<endl<<"the fudge?!";
				masuk_tak();
	}
	cout<<endl<<"chantek!"<<endl;
}
int main()
{
	masuk_tak();
}
