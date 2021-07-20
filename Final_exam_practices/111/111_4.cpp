//111_4
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		{
			string s;
			cin>>s;
			int h=(s.at(0)-48)*10+(s.at(1)-48);
			int m=(s.at(3)-48)*10+(s.at(4)-48);
			if(h>=12)
				h-=12;
		//	cout<<"h="<<h<<",m="<<m<<endl;
			double hourangle=h*30+m*0.5;
			double minuteangle=m*6;
			double angle=hourangle-minuteangle;
			
			if(angle>180.0)
				angle=minuteangle+360-hourangle;
			if(angle>=0)
				printf("%.1f",angle);
			else
				printf("%.1f",angle*-1);	
			cout<<endl;						
		}
	return 0;	
}
