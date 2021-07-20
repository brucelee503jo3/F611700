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
	int longestnamesize=students[0].name.size(),shortestnamesize=students[0].name.size();
	string longestnamegender=students[0].gender,shortestnamegender=students[0].gender;
	for(int i=1;i<n;i++)
		{
			if(students[i].name.size()>longestnamesize)
				{
					longestnamesize=students[i].name.size();
					longestnamegender=students[i].gender;
				}
			if(students[i].name.size()<shortestnamesize)
				{
					shortestnamesize=students[i].name.size();
					shortestnamegender=students[i].gender;				
				}
		}	
	cout<<longestnamegender<<endl<<shortestnamegender<<endl;
	return 0; 
} 
