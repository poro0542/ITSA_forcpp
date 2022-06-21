#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
    int a,b;
    while(cin>>a>>b){
        if(b<a){
            int temp=b;
            b=a;
            a=temp;
        }
        cout<<(a+b)*(b-a+1)/2<<endl;
    }
}
