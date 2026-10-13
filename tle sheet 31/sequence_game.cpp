#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       vector<int>ans;
       int last=-1;
       for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x>=last){
            ans.push_back(x);
        }
        else{
            if(x==1){
                ans.push_back(x);
                ans.push_back(x);
            }
            else{
                ans.push_back(x-1);
                ans.push_back(x);
            }
        }
        last=x;
       }
       int m=ans.size();
       cout<<m<<endl;
       for(int i=0;i<m;i++){
        cout<<ans[i]<<" ";
       }cout<<endl; 
    }
    return 0;
}