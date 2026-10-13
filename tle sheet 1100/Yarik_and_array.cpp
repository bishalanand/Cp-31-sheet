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
        vector<int>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        long long sum=0;
        long long maxsum=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                sum=max((long long)nums[i],sum+nums[i]);
                maxsum=max(maxsum,sum);
                if(i<n-1 && nums[i+1]%2==0){
                    sum=0;
                }
            }
            else if(nums[i]%2!=0){
                sum=max((long long)nums[i],sum+nums[i]);
                maxsum=max(maxsum,sum);
                if(i<n-1 && nums[i+1]%2!=0){
                    sum=0;
                }
            }

        }
        cout<<maxsum<<endl;
    }
}