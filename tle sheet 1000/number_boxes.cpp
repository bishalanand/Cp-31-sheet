#include<iostream>
#include<cstdlib>
#include<climits>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int mini=INT_MAX;
        bool iszero=false;
        int count=0;
        int sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int x;
                cin>>x;
                if(x<0){
                    count++;
                }
                else if(x==0){
                    iszero=true;
                }
                mini=min(mini,abs(x));
                sum+=abs(x);
            }
        }
        if(iszero){
            cout<<sum<<endl;
        }
        else if(count%2==0){
            cout<<sum<<endl;
        }
        else{
            cout<<sum-(2*mini)<<endl;
        }
    }
}