#include<iostream>
#include<conio.h>
using namespace std;
class add
{
	private:
		int a,b,c;
		public:
		void input()
		{
			cout<<"Enter the two Numbers:"<<endl;
			cin>>a>>b;
		}
		void sum()
		{
			c=a+b;
		}
		void show()
		{
			cout<<c;
		}
};
int main()
{
	add obj;
	obj.input();
	obj.sum();
cout<<"The sum of two Number is:";
	obj.show();
	return 0;
}