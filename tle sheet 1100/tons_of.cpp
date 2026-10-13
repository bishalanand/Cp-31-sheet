#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>prefix(n+1,0);
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            prefix[i]=prefix[i-1]+x;
        }
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        vector<int>group;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                group.push_back(i);
            }
        }
        long long ans=LLONG_MIN;
        for(long long y:group){
            long long maxi=LLONG_MIN;
            long long mini=LLONG_MAX;
            long long prev=0;
            long long x=y;
            while(x<=n){
                maxi=max(maxi,prefix[x]-prefix[prev]);
                mini=min(mini,prefix[x]-prefix[prev]);
                prev=x;
                x+=y;
            }
            ans=max(ans,maxi-mini);
        }
        cout<<ans<<endl;
    }
}