#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>nums;
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            nums.push_back(x);
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            if(nums[i-1]!=i){
                int diff=abs(nums[i-1]-i);
                ans=gcd(ans,diff);
            }
        }
        cout<<ans<<endl;

    }
}