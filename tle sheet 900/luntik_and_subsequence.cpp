#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long zero=0;
        long long one=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==1){
                one++;
            }
            else if(x==0){
                zero++;
            }
        }
        if(one==0){
            cout<<0<<endl;
            continue;
        }
        long long pow=1;
        for(int i=0;i<zero;i++){
            pow*=2;
        }
        long long ans=one*pow;
        cout<<ans<<endl;
    }
}