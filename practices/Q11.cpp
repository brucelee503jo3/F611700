#include<iostream>
using namespace std;
int main()
{
	int stu,max,min;
	cin>>stu;
	int a[stu];
	for(int i=0;i<stu;i++)
		{
			cin>>a[i];
		}
	min=a[0];
	max=a[0];		
	for(int i=1;i<stu;i++)
		{
			if(a[i]>max)
				max=a[i];
			if(a[i]<min)
				min=a[i];
		}
	cout<<min<<" "<<max;
	return 0;
}
