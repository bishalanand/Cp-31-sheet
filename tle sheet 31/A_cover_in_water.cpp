#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int first;
        cin>>first;
        bool hai=false;
        if(first==1){
            hai=true;
        }
        for(int i=1;i<n;i++){
            int num;
            cin>>num;
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