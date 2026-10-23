#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n,x;
    cin>>n>>x;
    long long y;
    cin>>y;
    long long dekh=x;
    for(int i=0;i<n;i++){
        long long fg;
        cin>>fg;
        dekh^=fg;
        
    }
    if((dekh%2==0 && y%2==0) || (dekh%2!=0 && y%2!=0)){
        cout<<"Alice"<<endl;
    }
    else{
        cout<<"Bob"<<endl;
    }
}
}