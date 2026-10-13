#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        long long q;
        cin>>n>>k>>q;
        int count=0;
        long long ans=0;
        for(int i=0;i<n;i++){
            long long x;
            cin>>x;
            if(x<=q){
                count++;
            }
            else{
                if(count>=k){
                    long long len=count-k+1;
                    ans+=1LL*len*(len+1)/2;
                }
                count=0;
            }
        }
        if(count>=k){
            long long len=count-k+1;
            ans+=1LL*len*(len+1)/2;
        }
        cout<<ans<<endl;
    }
}