#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int mod=1e9+7;
int find(long long n,vector<long long>&a){
    int ans=-1;
    int l=0;
    int h=a.size()-1;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(a[mid]>n){
            ans=mid;
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool ans=true;
        vector<long long>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<long long>b(n);
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        vector<int>tot(n,-1);
        for(int i=n-1;i>=0;i--){
            int idx=find(b[i],a);
            if(idx==-1){
                ans=false;
                break;
            }
            else{
                tot[i]=n-idx;
            }
        }
        long long mul=1;
        int count=0;
        for(int i=n-1;i>=0;i--){
            int tom=tot[i]-count;
            if(tom<=0){
                ans=false;
                break;
            }
            mul=(mul*tom)%mod;
            count++;
        }
        if(!ans){
            cout<<0<<endl;
        }
        else{
            cout<<mul<<endl;
        }
    }
}