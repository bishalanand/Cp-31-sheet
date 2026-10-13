#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<long long>a(n);
        vector<long long>pref(n+1);
        long long sum=0;
        pref[0]=sum;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            pref[i+1]=pref[i]+a[i];
        }
        long long maxi=LLONG_MIN;
        int i=0;
        while(i<=k){
            long long sum1=0,sum2=0;
            sum1+=(pref[(2*(k-i))]-pref[0]);
            sum2+=(sum-pref[n-i]);
            sum1+=sum2;
            maxi=max(maxi,sum-sum1);
            i++;
        }
        cout<<maxi<<endl;

    }
}