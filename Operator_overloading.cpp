#include<iostream>
using namespace std;
class Demo{
    public:
int a,b;
 Demo(int x , int y){
    a=x;
    b=y;
 }
 void Show(){
    cout<<"A = "<<a <<endl;
cout<<"B = "<<b<<endl;
 }
 void operator -(){
    a = -a;
    b= -b;
 }
};
int main () { 
    Demo d1(10,20);
    d1.Show();
    -d1;
    d1.Show();
    
}