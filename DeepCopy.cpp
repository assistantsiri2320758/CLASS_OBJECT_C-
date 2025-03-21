#include<iostream>
using namespace std;
class student{
    public:
    student (string name , double cgpa){
      this->  name =name ;
       this-> cgpaPtr = new double;
       *cgpaPtr = cgpa;
    }
    student  (student &obg){
        this -> name = obg.name;
        cgpaPtr = new double;
        *cgpaPtr = *obg.cgpaPtr; 

    }
    void getInfo(){
        cout<<"Name = "<<name<<endl;
        cout<<" Cgpa = "<<*cgpaPtr<<endl;
    }
    string name;
    double* cgpaPtr;
};
int main(){
     student s1 ("Sunil ", 8.9);
     student s2(s1);
s1.getInfo();
s2.name = "Neha ";
*(s2.cgpaPtr)=9.2;
s1.getInfo();
s2.getInfo();
}
