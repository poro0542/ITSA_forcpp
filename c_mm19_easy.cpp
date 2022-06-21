#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
    int a;
    while(cin>>a){
        if(a<=800){
            cout<<fixed<<setprecision(1)<<a*0.9<<endl;
            continue;
        }
        if(a<1500){
            cout<<fixed<<setprecision(1)<<a*0.81<<endl;
            continue;
        }
        cout<<fixed<<setprecision(1)<<a*0.9*0.79<<endl;
    }
}