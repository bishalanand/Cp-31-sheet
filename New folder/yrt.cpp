#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>a;
        vector<long long>idx;
        for(int i=1;i<=n;i++){
            long long x;
            cin>>x;
            if(x<i){
                a.push_back(x);
                idx.push_back(i);
            }
        }
        sort(a.begin(),a.end());
        int m=idx.size();
        long long ans=0;
        for(auto i:idx){
            auto it=upper_bound(a.begin(),a.end(),i);
            if(it!=a.end()){
                ans+=(m-(it-a.begin()));
            }
        }
        cout<<ans<<endl;
    }
}