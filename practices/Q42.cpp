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
	int pg=0,pb=0;
	for(int i=0;i<n;i++)
		{
			if(students[i].grade>=60&&students[i].gender=="F")
				pg++;
			if(students[i].grade>=60&&students[i].gender=="M")
				pb++;
		}	
	cout<<pg<<endl<<pb;	
	return 0; 
} 
