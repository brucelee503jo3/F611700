#include<iostream>
using namespace std;
int main()
{
	float a,b;
	cin>>a>>b;
	if(a==0&&b==0)
		cout<<"���I"<<endl;
	else if(a!=0&&b==0)
		cout<<"X�b"<<endl;
	else if(a==0&&b!=0)
		cout<<"Y�b"<<endl;
	else if(a>0&&b>0)
		cout<<"�Ĥ@�H��"<<endl;
	else if(a<0&&b>0)
		cout<<"�ĤG�H��"<<endl;
	else if(a<0&&b<0) 
		cout<<"�ĤT�H��"<<endl;
	else
		cout<<"�ĥ|�H��"<<endl;
	return 0; 
}
