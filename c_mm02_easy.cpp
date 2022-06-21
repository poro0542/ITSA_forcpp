#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
    int  a,b;
    float c=2;
    while(cin>>a>>b){
        cout<<fixed<<setprecision(1)<<a*b/c<<endl;
    }
}