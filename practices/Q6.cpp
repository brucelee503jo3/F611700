#include<iostream>
using namespace std;
int main()
{
	int a[20]={},num;
	cin>>num;
	for(int i=0;i<num;i++)
			cin>>a[i];
	for(int i=0;i<num;i++)
		{
		cout<<"Case"<<i+1<<":";	
		for(int j=1;j<=a[i];j++)
			cout<<j;
		cout<<endl;	
		}
	cout<<endl;			
	return 0;
}
