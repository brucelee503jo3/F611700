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
		cout<<a<<"�d"<<b<<"��"<<c<<"�Q"<<d<<endl;
	else if(b!=0&&c!=0&&d==0) 
		cout<<a<<"�d"<<b<<"��"<<c<<"�Q"<<endl;
	else if(b!=0&&c==0&&d!=0)
		cout<<a<<"�d"<<b<<"�ʹs"<<d<<endl;
	else if(b==0&&c!=0&&d!=0)
		cout<<a<<"�d�s"<<c<<"�Q"<<d<<endl;
	else if(b!=0&&c==0&&d==0)
		cout<<a<<"�d"<<b<<"��"<<endl;
	else if(b==0&&c!=0&&d==0)
		cout<<a<<"�d�s"<<c<<"�Q"<<endl;
	else if(b==0&&c==0&&d!=0)
		cout<<a<<"�d�s"<<d<<endl;
	else
		cout<<a<<"�d"<<endl; 
	return 0;
}
