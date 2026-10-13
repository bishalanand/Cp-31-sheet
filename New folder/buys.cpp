#include<iostream>
#include<climits>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long ans=LLONG_MIN;
        for(long long i=1;i*i<=n;i++){
            if(n%i==0){
                long long d1=i;
                long long d2=n/i;
                if(d1<=k){
                    ans=max(ans,d1);
                }
                if(d2<=k){
                    ans=max(ans,d2);
                }
            }
        }
        cout<<n/ans<<endl;
    }
}