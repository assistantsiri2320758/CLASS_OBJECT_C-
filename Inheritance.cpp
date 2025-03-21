#include<iostream>
using namespace std;
class Person{
public:
    string name;
    int age;
    Person(){
        cout<<"Parent Constructor\n";
    }
    ~Person(){
    cout<<"Parent Destructor\n";
    }

};
class Student : public Person{
    public:
    int rollno;
    Student (){
        cout<<"Child Constructor \n";
    }
    ~Student(){
        cout<<"Child Destructor\n";
    }
    void getInfo(){
        cout<<"name = "<<name <<endl;
        cout<<"Roll no = "<<rollno<<endl;
        cout<<"Age = "<<age<<endl;

    }
};
int main(){
    Student s1;
    s1.name = "Rahul Kumar ";
    s1. age = 24;
    s1. rollno = 1234;
    s1.getInfo();
}