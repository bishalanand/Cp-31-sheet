#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int>vsum(n);
        int sum=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            sum+=x;
            vsum[i]=sum;
        }
        for(int i=0;i<q;i++){
            int visum=sum;
            int l,r,k;
            cin>>l>>r>>k;
            if(l==1){
                visum-=vsum[r-1];
            }
            else{
                visum-=(vsum[r-1]-vsum[l-2]);
            }
            visum+=(r-l+1)*k;
            if(visum%2==0){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }
}