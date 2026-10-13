#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>limit(n+1,n);
        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            if(x>y)swap(x,y);
            limit[x]=min(limit[x],y-1);
        }
        for(int i=n-1;i>=0;i--){
            limit[i]=min(limit[i],limit[i+1]);
        }
        long long ans=0;
        for(int i=1;i<=n;i++){
            ans+=(limit[i]-i+1);
        }
        cout<<ans<<endl;
    }
}