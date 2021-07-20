#include<iostream>
#include<cstdlib>
using namespace std;
void print();
int main()
{
	int a;
	cin>>a;
	for(int i=0;i<a;i++)
		{
			int b;
			cin>>b;
			for(int j=0;j<b;j++)
			{
				print();
			}
			cout<<endl;
		}

	return 0;
}
void print()
{
		cout<<"orz";	
}
