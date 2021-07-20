#include<iostream>
using namespace std;
int main()
{
	int num,a,b,c,d;
	cin>>num;
	a=num/1000;
	b=num%1000/100;
	c=num%100/10;
	d=num%10;
	
	if(b!=0&&c!=0&&d!=0)
		cout<<a<<"千"<<b<<"百"<<c<<"十"<<d<<endl;
	else if(b!=0&&c!=0&&d==0) 
		cout<<a<<"千"<<b<<"百"<<c<<"十"<<endl;
	else if(b!=0&&c==0&&d!=0)
		cout<<a<<"千"<<b<<"百零"<<d<<endl;
	else if(b==0&&c!=0&&d!=0)
		cout<<a<<"千零"<<c<<"十"<<d<<endl;
	else if(b!=0&&c==0&&d==0)
		cout<<a<<"千"<<b<<"百"<<endl;
	else if(b==0&&c!=0&&d==0)
		cout<<a<<"千零"<<c<<"十"<<endl;
	else if(b==0&&c==0&&d!=0)
		cout<<a<<"千零"<<d<<endl;
	else
		cout<<a<<"千"<<endl; 
	return 0;
}
