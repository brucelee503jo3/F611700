//112_3
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
			string s;
			cin>>s;
			int count=0;
			for(int j=0;j<s.length();j++)
				if(s.at(j)==97||s.at(j)==101||s.at(j)==105||s.at(j)==111||s.at(j)==117)
					count++;	
			for(int j=1;j<s.length();j++)
				if((s.at(j)==97||s.at(j)==101||s.at(j)==105||s.at(j)==111||s.at(j)==117)&&(s.at(j-1)==97||s.at(j-1)==101||s.at(j-1)==105||s.at(j-1)==111||s.at(j-1)==117))					
					count--;
			cout<<count<<endl;
		}
	return 0;
}
