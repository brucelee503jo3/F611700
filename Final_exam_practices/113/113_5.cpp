#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		{
			int m;
			cin>>m;
			cin.get();
			string s,s1;
			cin>>s;
			for(int j=0;j<m;j++)
				{
					for(int k=0;k<s.length();k++)
						{
							if(m<=0)
								break;
							if(s.at(k)=='1'||s.at(k)=='2'||s.at(k)=='3')
								{
									s.at(k)='Y';
									m-=1;
								}
							//cout<<s<<endl;		
						}
					for(int k=0;k<s.length();k++)
						{
							if(m<=0)
								break;
							if(s.at(k)=='4'||s.at(k)=='5')
								{
									s.at(k)='Y';
									m-=1;
								}
							//cout<<s<<endl;									
						}	
					for(int k=0;k<s.length();k++)
						{
							if(m<=0)
								break;
							if(s.at(k)=='6'||s.at(k)=='7'||s.at(k)=='8'||s.at(k)=='9')
								{
									s.at(k)='Y';
									m-=1;
								}
							//cout<<s<<endl;									
						}
					for(int k=0;k<s.length();k++)
						{
							if(s.at(k)!='Y')
								s.at(k)='N';
						}													
				}
			cout<<s<<endl;	
		}
	return 0;
} 
