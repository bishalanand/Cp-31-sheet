#include<iostream>
#include<string>
#include<map>
using namespace std;

long long solve(int n,int mod){
    long long ans=1;
    for(int i=1;i<=n;i++){
        ans=(ans*i)%mod;
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int i=0;
        long long ans=1;
        long long ans2=0;
        long long mod=998244353;
        int n=s.length();
        while(i<n){
            int j=i;
            while(j<n && s[j]==s[i]){
                j++;
            }
            long long count=j-i;
            ans=(ans*count)%mod;
            ans2+=count-1;
            i=j;
        }
        ans=(ans*solve(ans2,mod))%mod;
        cout<<ans2<<" "<<ans<<endl;

    }
}