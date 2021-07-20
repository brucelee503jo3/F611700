//112_1
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		{
			int num[3];
			char ope[2];
			cin>>num[0]>>ope[0]>>num[1]>>ope[1]>>num[2];
			
			if(ope[0]=='+'&&ope[1]=='+')cout<<num[0]+num[1]+num[2]<<endl;
			if(ope[0]=='+'&&ope[1]=='-')cout<<num[0]+num[1]-num[2]<<endl;
			if(ope[0]=='+'&&ope[1]=='*')cout<<num[0]+num[1]*num[2]<<endl;				
			if(ope[0]=='+'&&ope[1]=='/')cout<<num[0]+num[1]/num[2]<<endl;
			
			if(ope[0]=='-'&&ope[1]=='+')cout<<num[0]-num[1]+num[2]<<endl;
			if(ope[0]=='-'&&ope[1]=='-')cout<<num[0]-num[1]-num[2]<<endl;
			if(ope[0]=='-'&&ope[1]=='*')cout<<num[0]-num[1]*num[2]<<endl;				
			if(ope[0]=='-'&&ope[1]=='/')cout<<num[0]-num[1]/num[2]<<endl;
			
			if(ope[0]=='*'&&ope[1]=='+')cout<<num[0]*num[1]+num[2]<<endl;
			if(ope[0]=='*'&&ope[1]=='-')cout<<num[0]*num[1]-num[2]<<endl;
			if(ope[0]=='*'&&ope[1]=='*')cout<<num[0]*num[1]*num[2]<<endl;				
			if(ope[0]=='*'&&ope[1]=='/')cout<<num[0]*num[1]/num[2]<<endl;
			
			if(ope[0]=='/'&&ope[1]=='+')cout<<num[0]/num[1]+num[2]<<endl;
			if(ope[0]=='/'&&ope[1]=='-')cout<<num[0]/num[1]-num[2]<<endl;
			if(ope[0]=='/'&&ope[1]=='*')cout<<num[0]/num[1]*num[2]<<endl;				
			if(ope[0]=='/'&&ope[1]=='/')cout<<num[0]/num[1]/num[2]<<endl;	
		}
	return 0;	
} 
