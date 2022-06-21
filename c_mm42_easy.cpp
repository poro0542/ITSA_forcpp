#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
    int a;
    while(cin>>a){
        double s=0,x=1,y=-1;
        for(int i=1;i<=a;i++){
            if(i%2==1)s+=x/(2*i-1);
            else s+=y/(2*i-1);
        }
        cout<<fixed<<setprecision(3)<<s<<endl;
    }
}
