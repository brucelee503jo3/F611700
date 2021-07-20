#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main(void)
{
	int n;
	cin>>n;
	string str;
	cin.get();
	for(int i=0;i<n;i++)
		{
			getline(cin,str);
			cout<<str.length()<<endl;
		}
	
	return 0;
}


