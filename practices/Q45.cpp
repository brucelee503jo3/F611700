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
	int girlcount=0,boycount=0;
	for(int i=0;i<n;i++)
		{
			if(students[i].gender=="F")
				girlcount++;
			if(students[i].gender=="M")
				boycount++;			
		}
	struct student girlstudents[girlcount],boystudents[boycount];
	int gc=0,bc=0;
	for(int i=0;i<n;i++)
		{
			if(students[i].gender=="F")
				{
					girlstudents[gc]=students[i];
					gc++;
				}
			if(students[i].gender=="M")
				{
					boystudents[bc]=students[i];
					bc++;					
				}	
		}				
	for(int i=1;i<girlcount;i++)
		for(int j=0;j<girlcount-i;j++)
			if(girlstudents[j].grade>girlstudents[j+1].grade)
				{
					struct student temp;
					temp=girlstudents[j+1];
					girlstudents[j+1]=girlstudents[j];
					girlstudents[j]=temp;
				}
	for(int i=1;i<boycount;i++)
		for(int j=0;j<boycount-i;j++)
			if(boystudents[j].grade>boystudents[j+1].grade)
				{
					struct student temp;
					temp=boystudents[j+1];
					boystudents[j+1]=boystudents[j];
					boystudents[j]=temp;
				}				
	for(int i=girlcount-1;i>=0;i--)
		{
			cout<<girlstudents[i].name<<" "<<girlstudents[i].gender<<" "<<girlstudents[i].grade<<endl;
		}	
	for(int i=boycount-1;i>=0;i--)
		{
			cout<<boystudents[i].name<<" "<<boystudents[i].gender<<" "<<boystudents[i].grade<<endl;
		}						
	return 0; 
} 
/*
26
A F 100
B M 23
C F 58
D M 65
E F 13
F M 92
G F 91
H M 83
I F 69
J M 43
K F 56
L M 72
M F 61
N M 52 
O F 31 
P M 84
Q F 64 
R M 91
S F 64 
T M 93
U F 81
V M 55
W F 37
X M 86
Y F 31
Z M 71
*/ 
