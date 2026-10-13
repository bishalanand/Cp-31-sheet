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
        vector<int>k(n);
        vector<int>c(m);
        for(int i=0;i<n;i++){
            cin>>k[i];
        }
        for(int i=0;i<m;i++){
            cin>>c[i];
        }
        long long cost=0;
        sort(k.begin(),k.end());
        int l=0;
        for(int i=n-1;i>=0;i--){
            if(l<m && c[l]<=c[k[i]-1]){
                cost+=c[l];
                l++;
            }
            else{
                cost+=c[k[i]-1];
            }
        }
        cout<<cost<<endl;
    }
}