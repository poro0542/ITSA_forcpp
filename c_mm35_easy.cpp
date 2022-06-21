#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
    int a;
    while(cin>>a){
        if(a%400==0){
            cout<<"Bissextile Year\n";
            continue;
        }
        if(a%100==0){
            cout<<"Common Year\n";
            continue;
        }
        if(a%4==0){
            cout<<"Bissextile Year\n";
            continue;
        }
        cout<<"Common Year\n";
    }
}