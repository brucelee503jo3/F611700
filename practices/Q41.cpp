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
	string girlmax,boymax;	
	int girlmaxgrade=0,boymaxgrade=0;
	for(int i=0;i<n;i++)
		{
			if(students[i].grade>girlmaxgrade&&students[i].gender=="F")
				{
					girlmaxgrade=students[i].grade;
					girlmax=students[i].name;
				}
			if(students[i].grade>boymaxgrade&&students[i].gender=="M")
				{
					boymaxgrade=students[i].grade;
					boymax=students[i].name;	
				}
		}	
	cout<<girlmax<<endl<<boymax<<endl;	
	return 0; 
} 
