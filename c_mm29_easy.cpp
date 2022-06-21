#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
    int a;
    while(cin>>a){
        a--;
        for(a;a>0;a--){
            int key=0;
            for(int j=2;j*j<=a;j++){
                if(a%j==0){
                    key=1;
                    break;
                }
            }
            if(key)continue;
            else{
                cout<<a<<endl;
                break;
            }
        }
    }
}