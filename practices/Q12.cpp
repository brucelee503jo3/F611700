#include<iostream>
using namespace std;
int main()
{
	int classes=0,stu=0;
	int min,max;
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
				max=a[i][j];
			if(a[i][j]<min)
				min=a[i][j];
			}
			cout<<min<<" "<<max<<endl;
		}	
	return 0;
}
