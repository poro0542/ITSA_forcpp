#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
    int a;
    while(cin>>a){
        cout<<"NT10="<<(a-(a%10))/10<<endl;
        a%=10;
        cout<<"NT5="<<(a-(a%5))/5<<endl;
        a%=5;
        cout<<"NT1="<<a<<endl;
    }
}