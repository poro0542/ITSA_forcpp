#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
    int a;
    while(cin>>a){
        int b=0,c=a;
        while(a!=0){
            int temp=a%10;
            b+=temp*temp*temp;
            a/=10;
        }
        if(b==c)cout<<"Yes\n";
        else cout<<"No\n";
    }
}