#include<iostream>
#include<string>
using namespace std;
class student
{
	public:
		void setdata(string,string,int);
		string getname();
		string getgender();
		int getgrade();
	private:
		string name;
		string gender;
		int grade;		
};
void student::setdata(string n,string ge,int gr) 
{
	name=n;
	gender=ge;
	grade=gr;
}
string student::getname()
{
	return name;
}
string student::getgender()
{
	return gender;
}
int student::getgrade()
{
	return grade;
}
int main()
{
	int n;
	cin>>n;
	student students[n];
	for(int i=0;i<n;i++)
		{
			string name;
			string gender;
			int grade;
			cin>>name>>gender>>grade;
			students[i].setdata(name,gender,grade);
		}
	string girlmin,boymin;	
	int girlmingrade=100,boymingrade=100;
	for(int i=0;i<n;i++)
		{
			if(students[i].getgrade()<girlmingrade&&students[i].getgender()=="F")
				{
					girlmingrade=students[i].getgrade();
					girlmin=students[i].getname();
				}
			if(students[i].getgrade()<boymingrade&&students[i].getgender()=="M")
				{
					boymingrade=students[i].getgrade();
					boymin=students[i].getname();	
				}
		}	
	cout<<girlmin<<endl<<boymin<<endl;	
	return 0;	
} 
/*
4
Johnson M 83
Amy F 75
Mary F 96
Wang M 53
*/
