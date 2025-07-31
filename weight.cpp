#include<iostream>
#include<conio.h>
using namespace std;
int acceralation(double m,double g=9.8){
return m*g;
}
int main(){
	double mass;
	cout<<"Enter the mass in kg: ";
	cin>>mass;
	double weight=acceralation(mass);
	cout<<"Mass:"<<mass<<"kg"<<endl;
	// cout<<"Gravity:9.8m/s"<<endl;
cout <<"Weight :"<<weight<<"N"<<endl;
	return 0;
}
 