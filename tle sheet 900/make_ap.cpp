#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long  a,b,c;
        cin>>a>>b>>c;
        int hai=false;
        if((a+c)%(2*b)==0){
            long long x=(a+c)/(2*b);
            if(x>0)hai=true;
        }
        if((2*b-c)>0 && (2*b-c)%a==0){
            long long x=(2*b-c)/a;
            if(x>0)hai=true;
        }
        if((2*b-a)>0 && (2*b-a)%c==0){
            long long x=(2*b-a)/c;
            if(x>0)hai=true;
        }
        if(hai){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}