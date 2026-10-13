#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int ans=-1;
        for(int i=0;i<n;i++){
            if(a[i]!=i){
                if(ans!=-1){
                    ans=ans&a[i];
                }
                else{
                    ans=a[i];
                }
            }
        }
        cout<<ans<<endl;

    }
}