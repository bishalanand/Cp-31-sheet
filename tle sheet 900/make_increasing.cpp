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
        int last=nums[n-1];
        int count=0;
        int hai=true;
        for(int i=n-2;i>=0;i--){
            if(nums[i]>=last){
                if(last==0){
                    hai=false;
                    break;
                }
                int vcount=0;
                while(nums[i]>=last){
                    nums[i]/=2;
                    vcount++;
                }
                count+=vcount;
            }
            last=nums[i];
        }
        if(!hai){
            cout<<-1<<endl;
        }
        else{
            cout<<count<<endl;
        }
    }
}