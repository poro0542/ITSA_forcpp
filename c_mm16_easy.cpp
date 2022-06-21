#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
    int x,y;
    while(cin>>x>>y){
        if(x*x+y*y<=40000)cout<<"inside\n";
        else cout<<"outside\n";
    }
}