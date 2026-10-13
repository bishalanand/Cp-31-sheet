#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<long long>as(n+1);
        vector<long long>a(n);
        as[0]=0;
        vector<long long>b(q);
        for(int i=1;i<=n;i++){
            long long x;
            cin>>x;
            as[i]=as[i-1]+x;
            if(i==1){
                a[i-1]=x;
            }
            else{
                a[i-1]=max(a[i-2],x);
            }
        }
        for(int i=0;i<q;i++){
            cin>>b[i];
        }
        vector<long long>ans(q);
        for(int i=0;i<q;i++){
            long long v=b[i];
            auto it=upper_bound(a.begin(),a.end(),v);
            if(it==a.end()){
                ans[i]=as.back();
            }
            else{
                int idx=it-a.begin();
                if(idx==0){
                    ans[i]=0;
                }
                else{
                    ans[i]=as[idx];
                }
            }
        }
        for(int i=0;i<q;i++){
            cout<<ans[i]<<" ";
        }cout<<endl;

    }
}