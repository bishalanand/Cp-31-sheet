#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        bool ans=false;
        for(int i=1;i<n-1;i++){
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1]){
                cout<<"YES"<<endl;
                cout<<i<<" "<<i+1<<" "<<i+2<<endl;
                ans=true;
                break;
            }
        }
        if(!ans){
            cout<<"NO"<<endl;
        }
    }
}
