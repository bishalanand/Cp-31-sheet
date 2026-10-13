#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long x;
        cin>>x;
        vector<long long>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        long long ans=1;
        long long l=1;
        long long r = *max_element(nums.begin(), nums.end()) + x;
        while(l<=r){
            long long mid=l+(r-l)/2;
            long long sum=0;
            for(int i=0;i<n;i++){
                if(nums[i]<=mid){
                    sum+=(mid-nums[i]);
                }
            }
            if(sum<=x){
                l=mid+1;
                ans=mid;
            }
            else{
                r=mid-1;
            }
        }
        cout<<ans<<endl;
    }
}