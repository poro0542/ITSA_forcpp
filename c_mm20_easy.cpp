#include <iostream>
#include<string>
#include<iomanip>
using namespace std;
int main(){
    int a;
    while(cin>>a){
        cout<<setiosflags(ios::uppercase)<<hex<<a<<endl;
    }
}

