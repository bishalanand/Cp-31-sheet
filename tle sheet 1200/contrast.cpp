#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long >a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<long long>b;
        b.push_back(a[0]);
        for(int i=1;i<n;i++){
            if(a[i]!=a[i-1]){
                b.push_back(a[i]);
            }
        }
        if(b.size()<=1){
            cout<<1<<endl;
            continue;
        }
        int ans=0;
        int curr=(b[0]>b[1])?1:-1;
        int m=b.size();
        for(int i=2;i<m;i++){
            int prev=(b[i-1]>b[i])?1:-1;
            if(prev!=curr){
                ans++;
            }
            curr=prev;
        }
        cout<<ans+2<<endl;
    }
}