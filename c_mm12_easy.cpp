#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
    float   a;
    while(cin>>a){
        a*=100;
        int b=(int)(a-1)/23.8+1;
        cout<<b<<endl;

    }
}