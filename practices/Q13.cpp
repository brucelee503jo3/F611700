#include<iostream>
using namespace std;
int main()
{
	int classes=0,stu=0;
	int min,max;
	int flag1=1,flag2=1;
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
			max=a[i][0];
			min=a[i][0];							
		for(int j=0;j<stu;j++)
			{
			if(a[i][j]>max)
				{
					max=a[i][j];
					flag2=j+1;
				}
			if(a[i][j]<min)
				{
					min=a[i][j];
					flag1=j+1;
				}
			}
			cout<<flag1<<" "<<flag2<<endl;
			flag1=1,flag2=1;
		}	
	return 0;
}
