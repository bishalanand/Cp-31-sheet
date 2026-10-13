#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n),ai(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>ai[i];
        }
        int l=0;
        int r=n-1;
        while(l<=n-1 && a[l]==ai[l]){
            l++;
        }
        while(r>=0 && a[r]==ai[r]){
            r--;
        }
        while(l>0 && ai[l-1]<=ai[l]){
            l--;
        }
        while(r<n-1 && ai[r]<=ai[r+1]){
            r++;
        }
        cout<<l+1<<" "<<r+1<<endl;
    }
}