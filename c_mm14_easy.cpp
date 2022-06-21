#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
    int  a;
    while(cin>>a){
        int h,m,s;
        s=a%60;
        a/=60;
        m=a%60;
        a/=60;
        h=a%24;
        a/=24;
        cout<<a<<" days\n"<<h<<" hours\n"<<m<<" minutes\n"<<s<<" seconds\n";
    }
}