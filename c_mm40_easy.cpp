#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
    int a;
    while(cin>>a){
        int b=(a+1)*a/2;
        for(int i=1;i<a;i++){
            cout<<i<<" + ";
        }
        cout<<a<<" = "<<b<<endl;
    }
}