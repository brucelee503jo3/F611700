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
	int longestnamesize=students[0].getname().size(),shortestnamesize=students[0].getname().size();
	int longestnamegrade=students[0].getgrade(),shortestnamegrade=students[0].getgrade();
	for(int i=1;i<n;i++)
		{
			if(students[i].getname().size()>longestnamesize)
				{
					longestnamesize=students[i].getname().size();
					longestnamegrade=students[i].getgrade();
				}
			if(students[i].getname().size()<shortestnamesize)
				{
					shortestnamesize=students[i].getname().size();
					shortestnamegrade=students[i].getgrade();				
				}
		}	
	cout<<longestnamegrade<<endl<<shortestnamegrade<<endl;	
	
	
	
	
	return 0;	
} 
