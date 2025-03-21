#include<iostream>
using namespace std;
class teacher{
    private:
float salary;

    public:
     string name;
string subject;

 /*   teacher (){
        cout<<"Hi, I am Constructor "<<endl;
    subject = "C++";

}  */
teacher(string name , string subject){
       this-> name = name ;
       this-> subject =subject;
}
void getInfo(){
    cout<<"Name = "<<name<<endl;
    cout<<"Subject = "<<subject<<endl;

}
teacher(teacher &orgObg){
    cout<<"I am Custom Copy Constructor"<<endl;
    this -> name = orgObg.name;
this -> subject = orgObg.subject;
}

  void setsalary(float s){
salary = s;
  }  
  int getsalary(){
    return salary;
  }

};
int main(){
    teacher t1("Sunil","C++");
  // t1. getInfo();
   teacher t2(t1);
   t2.getInfo();
  t1. setsalary(23000);
   cout<<t1.getsalary()<<endl;
   
}