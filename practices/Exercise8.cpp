#include<iostream>
using namespace std;
int main()
{
	int month;
	cin>>month;
	switch(month)
		{
			case 1 ... 2:
				cout<<"¥V"<<endl;
				break;
			case 3 ... 5:
				cout<<"¬K"<<endl;
				break;
			case 6 ... 8:		
				cout<<"®L"<<endl;
				break;				
			case 9 ... 11:
				cout<<"¬î"<<endl;
				break;				
			case 12:
				cout<<"¥V"<<endl; 
				break;
			default:
			cout<<"error"<<endl;	
		}
	return 0;
}
