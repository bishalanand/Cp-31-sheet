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
        vector<long long>a(n);
        vector<pair<long long,int>>pt;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            long long x;
            cin>>x;
            a[i]-=x;
            pt.push_back({a[i],i});
        }
        sort(pt.begin(),pt.end());
        vector<int>ans;
        long long c=pt[n-1].first;
        int j=n-1;
        while(j>=0 && pt[j].first==c){
            ans.push_back(pt[j].second+1);
            j--;
        }
        sort(ans.begin(),ans.end());
        cout<<ans.size()<<endl;
        for(auto i:ans){
            cout<<i<<" ";
        }cout<<endl;
    }
}