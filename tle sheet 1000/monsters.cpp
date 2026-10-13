#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;

vector<int>solve(int &n,int k,vector<long long>&nums){
    vector<int>ans;
    vector<pair<long long,int>>count;
    for(int i=0;i<n;i++){
        if(nums[i]==0){
            ans.push_back(i+1);
        }
        else{
            count.push_back({nums[i],i+1});
        }
    }
    sort(count.begin(),count.end(),[](const pair<long long,int>&a,const pair<long long,int>&b){
        return(a.first!=b.first)?a.first>b.first:a.second<b.second;
    });
    for(auto &p:count){
        ans.push_back(p.second);
    }
    return ans;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long k;
        cin>>k;
        vector<long long>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        for(int i=0;i<n;i++){
            nums[i]=nums[i]%k;
        }
        vector<int>ans=solve(n,k,nums);
        int size=ans.size();
        for(int i=0;i<size;i++){
            cout<<ans[i]<<" ";
        }cout<<endl;
    }
}