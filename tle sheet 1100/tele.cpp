#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long long c;
        cin>>n>>c;
        vector<long long>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<long long>b(n);
        for(int i=0;i<n;i++){
            b[i]=i+1+a[i];
        }
        sort(b.begin(),b.end());
        int ans=0;
        int i=0;
        while(i<n){
            c-=b[i];
            if(c<0){
                break;
            }
            i++;
            ans++;
        }
        cout<<ans<<endl;
    }
}