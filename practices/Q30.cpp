#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int main(void)
{
	int n;
	cin>>n;
	cin.get();
	string str;
	for(int i=0;i<n;i++)
		{
			getline(cin,str);
			for(int j=0;j<str.length();j++)
				{
					if(str.at(j)>=65&&str.at(j)<=90)
						{
							str.at(j)+=32;
						}
				}
			cout<<str<<endl;	
		}
	return 0;
}


