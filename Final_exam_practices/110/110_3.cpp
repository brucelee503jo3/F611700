//110_3
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n,x,y;
	string s;
	(cin>>n).get();
	for(int i=0;i<n;i++)
		{
			cin>>x>>y;
			cin.get();
			cin>>s;
			char ch;
			int p;
			for(int i=0;i<s.length();i++)
				{
					if(i%2==0)
						ch=s.at(i);
					else
						{
							p=s.at(i)-48;//Óf§A¶ýASCII 
							switch(ch)
								{
									case 'N':
										y+=p;
										break;
									case 'S':
										y-=p;
										break;
									case 'W':
										x-=p;
										break;
									case 'E':
										x+=p;
										break;	
								}	
						}
				}
			cout<<"("<<x<<","<<y<<")"<<endl;	
		}	
	return 0;
}
