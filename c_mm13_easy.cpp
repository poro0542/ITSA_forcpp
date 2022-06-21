#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
        int  a1,b1,a2,b2;
    while(cin>>a1>>b1>>a2>>b2){
        a1=a1*60+b1;
        a2=a2*60+b2;
        int m=a2-a1;
        if(m<=120){
            cout<<(m/30)*30<<endl;
            continue;
        }
        if(m<=240){
            m-=120;
            cout<<(m/30)*40+120<<endl;
            continue;
        }
        m-=240;
        cout<<(m/30)*60+280<<endl;

        
    }
}