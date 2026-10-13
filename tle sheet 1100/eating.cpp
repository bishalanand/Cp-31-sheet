#include<iostream>
#include<vector>
#include<unordered_map>
#include<climits>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int ans=0;
        long long left=0;
        long long right=0;
        int l=0;
        int r=n-1;
        while(l<r){
            left+=a[l];
            right+=a[r];
            if(left==right){
                ans=max(ans,l+1+n-r);
            }
            if(left>=right){
                left-=a[l];
                r--;
            }
            else{
                right-=a[r];
                l++;
            }
        }
        cout<<ans<<endl;
    }
}