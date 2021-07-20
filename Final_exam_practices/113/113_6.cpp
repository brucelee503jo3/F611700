#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
bool test(string s,int n)
{
	for(int i=0;i<n+1;i++)
		{
			for(int j=0;j<s.length();j++)
				{
					if(s.at(j)==(char)(i+48))
						s.at(j)='O';
				}
			//cout<<s<<endl;	
		}
   if((s.at(0)==s.at(1)&&s.at(1)==s.at(2))||
	  (s.at(3)==s.at(4)&&s.at(4)==s.at(5))||
	  (s.at(6)==s.at(7)&&s.at(7)==s.at(8))||
	  (s.at(0)==s.at(3)&&s.at(3)==s.at(6))||
	  (s.at(1)==s.at(4)&&s.at(4)==s.at(7))||
	  (s.at(2)==s.at(5)&&s.at(5)==s.at(8))||
	  (s.at(0)==s.at(4)&&s.at(4)==s.at(8))||
	  (s.at(2)==s.at(4)&&s.at(4)==s.at(6)))	
	  return true;
	else
	  return false;  
		
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		{
			string s1,s2,s3;
			cin>>s1>>s2>>s3;
			s1+=s2;
			s1+=s3;
			int c=0;
			for(int j=0;j<10;j++)
				{
					if(test(s1,j))
						{
							c=j;
							break;
						}
				}				
			cout<<c<<endl;	
		}	
	return 0;
} 
