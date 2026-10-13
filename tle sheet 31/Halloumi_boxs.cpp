#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int hai=false;
        if(k<=1){
            int prev;
            cin>>prev;
            for(int i=1;i<n;i++){
                int next;
                cin>>next;
                if(next<prev){
                    hai=true;
                    for(int j=i+1;j<n;j++){
                        int x;
                        cin>>x;
                    }
                    cout<<"NO"<<endl;
                    break;
                }
                prev=next;
            }
            if(!hai){
                cout<<"YES"<<endl;
            }
        }
        else{
            for(int i=0;i<n;i++){
                int x;
                cin>>x;
            }
            cout<<"YES"<<endl;
        }
    }
    return 0;
}