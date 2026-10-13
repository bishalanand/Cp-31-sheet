#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

vector<int> find(vector<long long>&a){
    vector<pair<long long,int>>temp;
    int n=a.size();
    for(int i=0;i<n;i++){
        temp.push_back({a[i],i});
    }
    sort(temp.begin(),temp.end());
    vector<int>ans;
    for(int i=n-1;i>=n-3;i--){
        ans.push_back(temp[i].second);
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>a(n),b(n),c(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
            cin>>c[i];
        }
        vector<int>x=find(a);
        vector<int>y=find(b);
        vector<int>z=find(c);
        long long ans=LLONG_MIN;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                for(int k=0;k<3;k++){
                    if(x[i]==y[j] || y[j]==z[k] ||z[k]==x[i])continue;

                    ans=max(ans,(a[x[i]]+b[y[j]]+c[z[k]]));
                }
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}