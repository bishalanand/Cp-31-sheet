#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>nums;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            nums.push_back(x);
        }
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        sort(nums.begin(),nums.end());
        int maxcount=INT_MIN;
        int count=1;
        for(int i=0;i<n-1;i++){
            if(nums[i]+k>=nums[i+1]){
                count++;
            }
            else{
                count=1;
            }
            maxcount=max(maxcount,count);
        }
        cout<<n-maxcount<<endl;
    }
    return 0;
}