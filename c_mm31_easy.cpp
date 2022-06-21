#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
    int a;
    while(cin>>a){
        while(a%6!=0)a--;
        int b=a;
        while(b%12!=0)b--;
        cout<<(a+6)*(a/6)/2-(b+12)*(b/12)/2<<endl;
    }
}