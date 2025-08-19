#include<iostream>
#include<cstring>
using namespace std;
class Student{
    char name[30];
    int id;
    public:
    void setData(char name[], int id){
        strcpy(this->name,name);
        this->id=id;
    }

Student operator =(const Student s){
    strcpy(name,s.name);
        id=s.id;
}

    void displayData(){
        cout<<"Name = "<<name<<endl;
        cout<<"Id = "<<id<<endl;
    }
};

int main(){
char nm[30] = "Saroj";
    Student s1,s2;
    s1.setData(nm, 21);
    s1.displayData();
    s2=s1;
    s2.displayData();
    return 0;
}