#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        int ans=12;
        if(k!=4){
            for(int i=0;i<n;i++){
                if(nums[i]%k==0){
                    ans=0;
                    break;
                }
                else{
                    int add=nums[i]/k;
                    add=(add+1)*k-nums[i];
                    ans=min(ans,add);
                }
            }
            cout<<ans<<endl;
        }
        else{
            int ans=12;
            int counte=0;
            for(auto &i:nums){
                if(i%4==0){
                    cout<<0<<endl;
                    counte=-1;
                    break;
                }
                else if(i%2==0){
                    counte++;
                }
                int add=i/4;
                add=(add+1)*4-i;
                ans=min(ans,add);
            }
            if(counte>=2){
                cout<<min(0,ans)<<endl;
            }
            else if(counte==0){
                cout<<min(2,ans)<<endl;
            }
            else if(counte==1){
                cout<<min(1,ans)<<endl;
            }
        }

    }
}