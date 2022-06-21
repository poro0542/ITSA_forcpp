#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
    int a,b,c;
    while(cin>>a>>b>>c){
        int max=a,s=a+b+c;
        if(max<b)max=b;
        if(max<c)max=c;
        if(s>max*2)cout<<"fit\n";
        else cout<<"unfit\n";

    }
}