#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	(cin>>n).get();
	for(int i=0;i<n;i++)
		{
			string s;
			getline(cin,s);
			for(int i=1;i<s.size();i++)
				for(int j=0;j<s.size()-i;j++)
					if(s.at(j)>s.at(j+1))
						{
							char temp;
							temp=s.at(j+1);
							s.at(j+1)=s.at(j);
							s.at(j)=temp;
						}
			cout<<s<<endl;			
		}
	return 0;	
}
