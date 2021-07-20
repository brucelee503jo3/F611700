//111_2
#include<iostream>
#include<string>
using namespace std;
int main()
{
	char chu='A'-1;
	char chl='a'-1;
	string s;
	int count,n;
	cin>>n;
	for(int i=0;i<n;i++)
		{
			(cin>>count).get();
			cin>>s;
			if(s=="Upper")
				cout<<(char)(chu+count)<<endl;
			else
				cout<<(char)(chl+count)<<endl;
		}
	return 0;	
}
