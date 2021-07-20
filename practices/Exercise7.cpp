#include<iostream>
using namespace std;
int main()
{
	int num;
	cin>>num;
	if(num<=50)
		cout<<num*100<<endl;
	else if(num>50&&num<=70)
		cout<<5000+(num-50)*125<<endl;
	else
		cout<<7500+(num-70)*150<<endl;
	return 0;
} 
