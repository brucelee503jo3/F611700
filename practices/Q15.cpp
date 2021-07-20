#include<iostream>
using namespace std;
int main()
{
	int classes=0,stu=0;
	cin>>classes>>stu;
	int sum[stu]={};
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
				sum[j]+=a[i][j];
			}
		}	
	for(int i=0;i<stu;i++)
		{
			cout<<sum[i]<<endl;
		}
	return 0;
}
