#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int small=INT_MAX;
        int last=-1;
        int ans;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(last==-1){
                last=x;
            }
            else{
                int check=x-last;
                small=min(small,check);
                last=x;
            }
        }
        if(small<0){
            ans=0;
            cout<<ans<<endl;
        }
        else{
            if(small%2==0){
                ans=(small+2)/2;
                cout<<ans<<endl;
            }
            else{
                ans=(small+1)/2;
                cout<<ans<<endl;
            }
        }
        
    }
}
