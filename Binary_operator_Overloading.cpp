#include<iostream>
using namespace std;
class Demo{
    public:
    int a,b;
    Demo(){

    }
    Demo(int x,int y){
        a=x;
        b=y;
    }
    void Show(){
        cout<<"A = "<<a<<endl;
        cout<<"B = "<<b<<endl;
    }
    Demo operator + (Demo &obj){
        Demo temp;
        temp.a = a + obj.a;
temp.b = b + obj.b;
return temp;
    }
};
int main(){
    Demo d1(10,20),d2(30,40),d3;
    d3=d1+d2;
    d3.Show();
}