#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
    int a;
    while(cin>>a){
        if(a>=35)cout<<35;
        for(int i=70;i<=a;i+=35){
            cout<<" "<<i;
        }
        cout<<endl;
    }
}