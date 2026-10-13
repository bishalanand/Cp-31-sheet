#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>nums;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            nums.push_back(x);
        }
        for(int i=0;i<n-1;i++){
            if(nums[i+1]%nums[i]==0){
                while(nums[i+1]%nums[i]==0){
                    nums[i]=nums[i]+1;
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<nums[i]<<" ";
        }
        cout<<endl;
    }
}