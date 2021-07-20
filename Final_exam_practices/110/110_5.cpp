//110_5
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	cin.get();
	for(int i=0;i<n;i++)
		{
			string s1,s2;
			cin>>s1>>s2;
			int status=0;
			for(int j=0;j<s1.length()-s2.length()+1;j++)
				{
					if(s1.at(j)==s2.at(0))
						{
							string s3;
							s3=s1.substr(j,s2.length());
							//cout<<s3;
							if(s3==s2)
								status=1;
						}	
				}
			if(status==1)
				cout<<"true"<<endl;
			else
				cout<<"false"<<endl;		
		}
	return 0;
}
