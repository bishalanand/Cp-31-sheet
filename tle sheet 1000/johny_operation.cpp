#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        long long p=0,q=0;
        while(a%2==0){
            p++;
            a/=2;
        }
        while(b%2==0){
            q++;
            b/=2;
        }
        if(a!=b){
            cout<<-1<<endl;
        }
        else{
            int d=abs(p-q);
            int ans=0;
            if(d%3!=0){
                ans++;
            }
            ans+=d/3;
            cout<<ans<<endl;
        }
    }
}