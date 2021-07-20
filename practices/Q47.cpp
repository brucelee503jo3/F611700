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
	int pg=0,pb=0;
	for(int i=0;i<n;i++)
		{
			if(students[i].getgrade()<60&&students[i].getgender()=="F")
				pg++;
			if(students[i].getgrade()<60&&students[i].getgender()=="M")
				pb++;
		}	
	cout<<pg<<endl<<pb;		
	
	
	
	
	return 0;	
} 
