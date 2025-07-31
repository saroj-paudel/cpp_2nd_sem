#include<iostream>
#include<conio.h>
using namespace std;
class student{
	private:
	char studentname[20];
	int rollno;
	char address[100];
	public:
		 void inputdata(){
		 	cout<<"Enter the Name of Student:";
		 	cin>>studentname;
		 	cout<<"Enter the Rollno of Student:";
		 	cin>>rollno;
		 	cout<<"Enter the Address of Student:";
		 	cin>>address;
		 }
		 void displaydata(){
		 	cout<<"Name:"<<studentname<<endl;
		 	cout<<"Rollno:"<<rollno<<endl;
		 	cout<<"Address:"<<address<<endl;
		 }
};
int main(){
	student s1,s2;
	cout<<"Enter the Details of First Student:"<<endl;
	s1.inputdata();
	cout<<endl;
	cout<<"Enter the Details of Second Student:"<<endl;
	s2.inputdata();
	cout<<endl;
	cout<<"Displaying Information of Students:"<<endl;
	cout<<endl;
	cout<<"Displaying First Student Information:"<<endl;
	s1.displaydata();
		cout<<endl;
	cout<<"Displaying Second Student Information:"<<endl;
	s2.displaydata();
		cout<<endl;
	return 0;
}