#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
    int a;
    while(cin>>a){
        long long ans=1;
        while(a>1){
            ans*=a;
            a--;
        }
        cout<<ans<<endl;
    }
}

