#include<iostream>
using namespace std;
class Person{
    public:
    string name;

    Person(){
        cout<<"Non - Parametrized Constructor\n";
    }

    Person(string name)
{
    this -> name = name;
    cout<<"Parametrized Constructor\n";
}
};
int main(){
    Person p1;
}
