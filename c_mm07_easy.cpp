#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
    int  a;
    while(cin>>a){
        long long b,c;
        b=a*a;
        c=a*b;
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
}