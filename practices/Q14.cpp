#include<iostream>
using namespace std;
int main()
{
	int classes=0,stu=0;
	int sum=0;
	cin>>classes>>stu;
	int a[classes][stu];
	for(int i=0;i<classes;i++)
		{
			for(int j=0;j<stu;j++)
				{
					cin>>a[i][j];
				}
		}
	for(int i=0;i<classes;i++)
		{							
		for(int j=0;j<stu;j++)
			{
				sum+=a[i][j];
			}
			cout<<sum<<endl;
			sum=0;
		}	
	return 0;
}
