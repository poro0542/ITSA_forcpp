#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
        int  a,b,d;
    float c=2;
    while(cin>>a>>b>>d){
        float e=(a+b)*d/c;
        cout<<"Trapezoid area:"<<fixed<<setprecision(1)<<e<<endl;
    }

}