#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        if(a == 0){
            if(b == 0) cout << 0 << endl;
            else cout << 1 << endl;
            continue;
        }
        long long y=(a-1)%4;
        if(y==0){
            y=a-1;
        }
        else if(y==1){
            y=1;
        }
        else if(y==2){
            y=a;
        }
        else{
            y=0;
        }
        if(y==b){
            cout<<a<<endl;
        }
        else if((y^b)!=a){
            cout<<a+1<<endl;
        }
        else{
            cout<<a+2<<endl;
        }
    }
}