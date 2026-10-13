#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0;
        for(int i=1;i<n;i++){
            int x;
            cin>>x;
            sum+=x;
        }
        int ans=0-sum;
        cout<<ans<<endl;
    }
    return 0;
}