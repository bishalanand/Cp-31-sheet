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
        vector<int>a(n);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a[i]=x;
        }
        sort(a.begin(),a.end());
        int mfreq=1,curr=1;
        for(int i=1;i<n;i++){
            if(a[i]==a[i-1]){
                curr++;
                mfreq=max(mfreq,curr);
            }
            else{
                curr=1;
            }
        }
        int ans=0;
        while(mfreq<n){
            ans++;
            int still=min(n-mfreq,mfreq);
            ans+=still;
            mfreq+=still;
        }
        cout<<ans<<endl;
    }
}