#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
    int max,min;
    while(cin>>max>>min){
        while(min!=0 && max!=0){
            if(max<min){
                int temp=max;
                max=min;
                min=temp;
            }
            max-=min;
        }
        cout<<min<<endl;
    }
}