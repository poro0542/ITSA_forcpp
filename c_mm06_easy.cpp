#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
    int  a;
    double b=1.6;
    while(cin>>a){
        cout<<fixed<<setprecision(1)<<a*b<<endl;
    }
}