#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k;
        cin>>k;
        vector<long long>a(n,0),b(n);
        long long sum=0;
        for(long long i=0;i<n;i++){
            long long x;
            cin>>x;
            sum+=x;
            a[i]=sum;
        }
        for(int i=0;i<n;i++) cin>>b[i];
        long long ans=-1;
        long long maxi=-1;
        for(long long i=0;i<n && i<k;i++){
            maxi=max(maxi,b[i]);
            long long subans=a[i]+maxi*(k-(i+1));
            ans=max(ans,subans);
        }
        cout<<ans<<endl;
    }
}