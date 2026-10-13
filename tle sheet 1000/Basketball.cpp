#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
        int n;
        long long d;
        cin>>n;
        cin>>d;
        vector<long long>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        sort(nums.begin(),nums.end());
        int ans=0;
        long long i=0;
        long long r=n-1;
        while(i<=r){
            if(nums[r]>d){
                r--;
                ans++;
            }
            else{
                long long k=d/nums[r]+1;
                if(i+(k-1)<=r){
                    i+=(k-1);
                    ans++;
                    r--;
                }
                else{
                    break;
                }
            }
        }
        cout<<ans<<endl;
        return 0;
}