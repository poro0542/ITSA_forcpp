#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
    int a,b;
    while(cin>>a>>b){
        int times=0;
        while(b!=0){
            if(b%100==a)times++;
            b/=10;
        }
        cout<<times<<endl;
    }
}