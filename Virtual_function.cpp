#include<iostream>
using namespace std;
class Parent{
    public:
   virtual void show(){
        cout<<"I am Base class .....\n";
    }
};
class Child : public Parent{
    void show(){
        cout<<"I am Derived Class .....\n";
    }
};
int main(){
    Child c1;
    Parent *p;
    p = &c1;
    p -> show();
}