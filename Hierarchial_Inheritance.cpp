#include<iostream>
using namespace std;
class Person{
    public:
    string name;
    int age;
};
class Student : public Person{
    public:
    int rollno;
};
class Teacher : public Student {
public :
string subject;
};
int main(){
    Teacher t1;
    t1.name = "shradha ";
    t1.subject= "CSE";
    t1.rollno= 34;
    t1.age = 23;
    cout<<t1.name<<endl;
    cout<<t1.age<<endl;
    cout<<t1.subject<<endl;
    cout<<t1.rollno<<endl;
    
}