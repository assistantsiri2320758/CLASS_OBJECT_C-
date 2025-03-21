#include<iostream>
#include<stdexcept>
using namespace std;
int main(){
    double bal = 1000.0;
    try{
        double amt;
        //Deposit
        cout<<"Enter Deposit Amount : ";
        cin>>amt;
        if(amt<=0){
            throw invalid_argument("Invalid Deposit Amount :");
        }
        bal = bal + amt;
        cout<<"Available Amount :"<<bal<<endl;

        //Withrawl
        cout<<"Enter Withdrawl Amount : ";
        cin>>amt;
        if(amt<=0){
 throw invalid_argument("Invalid Withrawl Amount :");
        }
        if(amt > bal){
             throw runtime_error("Insufficient Fund  :");
        }
        bal = bal - amt;
        cout<<"Available Amount :"<<bal<<endl;

    }
    catch (exception& e){
cout<<e.what();
    }
}