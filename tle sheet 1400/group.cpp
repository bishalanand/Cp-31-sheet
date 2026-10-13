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
        int first=INT_MAX;
        int second=INT_MAX;
        int ans=0;
        for(int i=0;i<n;i++){
            if(first>second)swap(first,second);
            int x;
            cin>>x;
            if(x<=first){
                first=x;
            }
            else if(x<=second){
                second=x;
            }
            else{
                first=x;
                ans++;
            }
        }
        
        cout<<ans<<endl;
    }
}