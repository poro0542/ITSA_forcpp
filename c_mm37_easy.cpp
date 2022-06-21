#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
    int a,b;
    while(cin>>a>>b){
        if(a>0 && b>0)cout<<"1st Quadrant\n";
        if(a>0 && b<0)cout<<"1st Quadrant\n";
        if(a<0 && b>0)cout<<"2nd Quadrant\n";
        if(a<0 && b<0)cout<<"3rd Quadrant\n";
        if(a==0 && b==0)cout<<"Origin\n";
        if(a==0 && b!=0)cout<<"y-axis\n";
        if(a!=0 && b==0)cout<<"x-axis\n";
    }
}