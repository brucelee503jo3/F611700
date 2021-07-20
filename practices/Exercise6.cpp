#include<iostream>
using namespace std;
int main()
{
	float a,b;
	cin>>a>>b;
	if(a==0&&b==0)
		cout<<"原點"<<endl;
	else if(a!=0&&b==0)
		cout<<"X軸"<<endl;
	else if(a==0&&b!=0)
		cout<<"Y軸"<<endl;
	else if(a>0&&b>0)
		cout<<"第一象限"<<endl;
	else if(a<0&&b>0)
		cout<<"第二象限"<<endl;
	else if(a<0&&b<0) 
		cout<<"第三象限"<<endl;
	else
		cout<<"第四象限"<<endl;
	return 0; 
}
