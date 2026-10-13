#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long size=1LL*n*k;
        vector<long long>nums;
        for(int i=0;i<size;i++){
            long long x;
            cin>>x;
            nums.push_back(x);
        }
        long long median=1LL*n*k;
        long long sum=0;
        while(k--){
            median-=(n/2+1);
            sum+=nums[median];
        }
        cout<<sum<<endl;
    }
}