#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,y,k;
        cin>>x>>y>>k;
        long long base=k*(y+1)-1;
        long long gain=x-1;
        long long need=0;
        if(base>0){
            need=(base+gain-1)/gain;
        }
        cout<<k+need<<endl;
    }
}