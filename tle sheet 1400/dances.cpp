#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<long long>a(n),b(n);
        a[0]=1;
        for(int i=1;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int l=0;
        int h=n;
        int ans=0;
        while(l<=h){
            int mid=l+(h-l)/2;
            bool hai=true;
            int j=n-mid-1;
            int k=n-1;
            while(j>=0){
                if(b[k]>a[j]){
                    k--;
                    j--;
                }
                else{
                    hai=false;
                    break;
                }
            }
            if(hai){
                ans=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        cout<<ans<<endl;

    }
}
