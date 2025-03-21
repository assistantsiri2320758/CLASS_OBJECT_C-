#include<iostream>
using namespace std;
class student{
    public:
    string name;
    double* cgpaPtr;
    student (string name , double cgpa){
       this-> name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }
    //Destructor
    ~student(){
        cout<<"I delete everything ";
        delete cgpaPtr;
    }
    void getInfo(){
        cout<<"Name = "<<name<<endl;
        cout<<"Cgpa = "<<*cgpaPtr<<endl;
    }
};
int main(){
    student s1("Sunil Kumar",9.2);
    s1.getInfo();
}