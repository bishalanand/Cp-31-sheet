#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,r,b;
        cin>>n>>r>>b;
        string ans;
        if(r%(b+1)==0){
            int k=r/(b+1);
            for(int i=0;i<=b;i++){
                for(int j=0;j<k;j++){
                    ans+='R';
                }
                if(i!=b){
                    ans+='B';
                }
            }
        }
        else{
            int k=r/(b+1);
            int rem=r%(b+1);
            for(int i=0;i<=b;i++){
                if(i<rem){
                    for(int j=0;j<=k;j++){
                        ans+='R';
                    }
                }
                else{
                    for(int j=0;j<k;j++){
                        ans+='R';
                    }
                }
                if(i!=b){
                    ans+='B';
                }
            }
        }
        cout<<ans<<endl;
    }
}