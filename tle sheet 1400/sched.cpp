#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>a(n+1,0);
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            a[x]++;
        }
        long long l=1;
        long long r=2*m;
        long long ans=-1;
        while(l<=r){
            long long mid=l+(r-l)/2;
            long long count=0;
            for(int i=1;i<=n;i++){
                if(a[i]>=mid){
                    count+=mid;
                }
                else{
                    count+=a[i];
                    count+=((mid-a[i])/2);
                }
            }
            if(count>=m){
                ans=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }

        }
        cout<<ans<<endl;
    }
}