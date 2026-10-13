#include<iostream>
#include<vector>
#include<climits>
using namespace std;

long long gcd(long long a,long long b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>a(n);
        vector<long long>pref(n+1);
        pref[0]=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            pref[i+1]=pref[i]+a[i];
        }
        long long sum=pref[n];
        long long ans=1;
        for(int i=1;i<n;i++){
            long long gc=gcd(pref[i]-pref[0],pref[n]-pref[i]);
            ans=max(ans,gc);
        }
        cout<<ans<<endl;
    }
}