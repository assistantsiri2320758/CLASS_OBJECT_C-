#include<iostream>
using namespace std;

class Person{
    public:
string name;
int age;
};
class Student : public Person {
public:
int  rollno;
void getInfo(){
    cout<<"Name = "<<name<<endl;
    cout<<"Ahe = "<<age <<endl;
    cout<<"Roll No = "<<rollno<<endl;
}

};
int main(){
Student s1;
s1.name = "Sunil Kumar ";
s1.age = 23;
s1.rollno = 2320758;
s1.getInfo();
}