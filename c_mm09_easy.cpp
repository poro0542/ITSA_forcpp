#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
    int  i;
    while(cin>>i){
        if(i>=31){
            cout<<"Value of more than 31\n";
            continue;
        }
        long long c=2;
        for(int j=0;j<i-1;j++){
            c*=2;
        }
        cout<<c<<endl;
    }
}