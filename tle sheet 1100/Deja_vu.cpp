#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    int t;
    cin>>t;
    unordered_map<int,long long>power;
    long long pow=1;
    for(int i=0;i<=30;i++){
        power[i]=pow;
        pow*=2;
    }
    while(t--){
        int n,q;
        cin>>n>>q;
        vector<long long>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        vector<int>p(q);
        for(int i=0;i<q;i++){
            cin>>p[i];
        }
        for(int i=0;i<q;i++){
            long long div=power[p[i]];
            for(int j=0;j<n;j++){
                if(nums[j]%div==0){
                    nums[j]+=power[p[i]-1];
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<nums[i]<<" ";
        }cout<<endl;
    }
}