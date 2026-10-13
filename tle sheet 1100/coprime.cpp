#include<iostream>
#include<vector>
using namespace std;

long long gcd(long long a,long long b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
int main(){
    vector<vector<int>>pair(1001);
    for(int i=1;i<1001;i++){
        for(int j=1;j<1001;j++){
            if(gcd(i,j)==1){
                pair[i].push_back(j);
            }
        }
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>idx(1001,0);
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            idx[x]=i;
        }
        int ans=-1;
        for(int i=1;i<1001;i++){
            if(idx[i]!=0){
                for(auto j:pair[i]){
                    if(idx[j]!=0){
                        ans=max(ans,idx[i]+idx[j]);
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
}