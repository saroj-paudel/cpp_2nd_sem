#include<iostream>
using namespace std;
class Base
{
protected:
int age;
    /* data */
public:
    void ask(){
        cout << "enter your age: ";
    }
    void display(){
        cout<<"Your age is "<<age;
    }
};

class Derived:public Base{
public:
void getData(){
    ask();
    cin>>age;
}
};

int main(){
Derived d;
d.getData();
d.display();


return 0;
}
