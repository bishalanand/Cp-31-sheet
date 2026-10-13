#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        int i=0;
        bool ansi=false;
        vector<int>ans(n);
        while(i<n){
            int j=i;
            while(j+1<n && nums[j+1]==nums[i]){
                j++;
            }
            if(j-i+1<=1){
                ansi=true;
                cout<<-1<<endl;
                break;
            }
            else{
                ans[i]=j+1;
                for(int k=i+1;k<=j;k++){
                    ans[k]=k;
                }
            }
            i=j+1;
        }
        if(!ansi){
            for(int i=0;i<n;i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
    }
}