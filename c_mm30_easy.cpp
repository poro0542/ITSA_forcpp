#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
    int a;
    while(cin>>a){
        int key=0;
        for(int i=2;i*i<=a;i++){
            if(a%i==0){
                key=1;
                break;
            }
        }
        if(key)cout<<"NO\n";
        else cout<<"YES\n";
    }
}