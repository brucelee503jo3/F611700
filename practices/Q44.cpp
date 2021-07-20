#include<iostream>
#include<string>
using namespace std;
struct student
{
	string name;
	string gender;
	int grade;
};
int main()
{
	int n;
	cin>>n;
	struct student students[n];
	for(int i=0;i<n;i++)
		{
			cin>>students[i].name>>students[i].gender>>students[i].grade;
		}
	for(int i=1;i<n;i++)
		for(int j=0;j<n-i;j++)
			if(students[j].grade>students[j+1].grade)
				{
					struct student temp;
					temp=students[j+1];
					students[j+1]=students[j];
					students[j]=temp;
				}
	for(int i=n-1;i>=0;i--)
		{
			cout<<students[i].name<<" "<<students[i].gender<<" "<<students[i].grade<<endl;
		}
	return 0; 
} 
/*
4
Johnson M 83
Amy F 75
Mary F 96
Wang M 53
*/
