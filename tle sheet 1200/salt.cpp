#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long long x;
        cin>>n;
        cin>>x;
        vector<int>a(n);
        vector<long long>pref(n+1,0);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            pref[i+1]=pref[i]+a[i];
        }
        long long ans=0;
        for(int i=n;i>=1;i--){
            if(pref[i]<=x){
                long long count=(x-pref[i])/i;
                ans+=(count+1);
            }
        }
        cout<<ans<<endl;
    }
}