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
        vector<pair<long long,long long>>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i].first;
            v[i].second=i+1;
        }
        sort(v.begin(),v.end());
        long long ans=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                long long check=v[i].first*v[j].first;
                if(check>=(2*n)){
                    break;
                }
                if(check==(v[i].second+v[j].second)){
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
}