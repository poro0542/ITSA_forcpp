#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
    int a;
    while(cin>>a){
        int bol[8];
        for(int i=0;i<8;i++)bol[i]=0;
        if(a>=0){
            for(int i=0;i<8;i++){
            bol[i]=a%2;
            a/=2;
            }
        }
        else{
            a=-a;
            a--;
            for(int i=0;i<8;i++){
            bol[i]=a%2;
            a/=2;
            if(bol[i]==1)bol[i]=0;
            else bol[i]=1;
            }
        }
        for(int i=7;i>=0;i--)cout<<bol[i];
        cout<<endl;
    }
}