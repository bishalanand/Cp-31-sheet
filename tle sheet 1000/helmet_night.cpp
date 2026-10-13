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
        long long p;
        cin>>p;
        vector<pair<long long, long long>> v(n);
        vector<long long>a(n),b(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            v[i]={b[i],a[i]};
        }
        sort(v.begin(),v.end());
        long long ans=p;
        long long count=1;
        for(auto &i:v){
            if(i.first>p) break;
            if(count+i.second>n){
                ans+=i.first*(n-count);
                count=n;
                break;
            }
            else{
                ans+=i.first*i.second;
                count+=i.second;
            }
        }
        ans+=(n-count)*p;
        cout<<ans<<endl;

    }
}