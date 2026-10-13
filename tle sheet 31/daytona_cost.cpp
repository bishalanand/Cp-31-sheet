#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int hai=false;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==k){
                hai=true;
            }
        }
        if(hai){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}