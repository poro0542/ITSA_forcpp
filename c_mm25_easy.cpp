#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
    int a;
    while(cin>>a){
        while(a%3!=0)a--;
        cout<<(a+3)*(a/3)/2<<endl;
    }
}