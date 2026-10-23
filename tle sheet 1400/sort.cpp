#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int i=0;
        int ans=0;
        while(i+k<n){
            int j=i+1;
            bool hai=true;
            for(;j<=(i+k) &&j<n;j++){
                if((a[j]*2LL)<=a[j-1]){
                    hai=false;
                    break;
                }
            }
            if(hai){
                ans++;
                while(j<n && (a[j]*2LL)>a[j-1]){
                    j++;
                    ans++;
                }
            }
            i=j;
        }
        cout<<ans<<endl;
    }
    
}