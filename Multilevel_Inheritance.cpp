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
class GradStudent : public Student{
    public:
    string researchArea;
void getInfo(){
    cout<<"Name = "<<name<<endl;
cout<<"Age = "<<age<<endl;
cout<<"Roll No = "<<rollno<<endl;
cout<<"Research Area = "<<researchArea<<endl;
}
    

};
int main(){
    GradStudent s1;
    s1.name = "Sunil Kuamr ";
    s1. age = 23;
    s1.rollno = 2320758;
    s1. researchArea = "Computer Science ";
    s1.getInfo();
}
