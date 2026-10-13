#include<iostream>
#include<algorithm>
#include<climits>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>nums;
        if(n==1){
            int x;
            cin>>x;
            cout<<0<<endl;
            continue;
        }
        int diff=INT_MIN;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(!nums.empty()){
                diff=max(diff,nums.back()-x);
            }
            nums.push_back(x);
        }
        int mini=INT_MAX;
        for(int i=0;i<n-1;i++){
            mini=min(mini,nums[i]);
        }
        mini=nums[n-1]-mini;
        int maxi=INT_MIN;
        for(int i=1;i<n;i++){
            maxi=max(maxi,nums[i]);
        }
        maxi=maxi-nums[0];
        int last=nums[n-1]-nums[0];
        int ans=max(max(maxi,mini),max(diff,last));
        cout<<ans<<endl;
    }
}