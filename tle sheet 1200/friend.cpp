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
        vector<int>x(n);
        vector<int>y(n);
        for(int i=0;i<n;i++){
            cin>>x[i];
        }
        for(int i=0;i<n;i++){
            cin>>y[i];
        }
        vector<int>chota;
        for(int i=0;i<n;i++){
            chota.push_back(x[i]-y[i]);
        }
        sort(chota.begin(),chota.end());
        int ans=0;
        int l=0;
        int r=n-1;
        while(l<r){
            if((chota[l]+chota[r])<=0){
                ans++;
                l++;
                r--;
            }
            else{
                r--;
            }
        }
        cout<<ans<<endl;
    }
}