#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
    int  a,b;
    while(cin>>a>>b){
        long long c=a+b;
        c*=c;
        cout<<c<<endl;
    }
}