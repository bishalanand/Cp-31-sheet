#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        unordered_map<int,int>freq;
        for(int i=0;i<n;i++){
            cin>>a[i];
            freq[a[i]-i-1]++;
        }
        long long ans=0;
        for(auto i:freq){
            if(i.second>=2){
                long long cnt=i.second;
                if(cnt%2==0){
                    ans+=((cnt/2)*(cnt-1));
                }
                else{
                    ans+=((cnt-1)/2*cnt);
                }
            }
        }
        cout<<ans<<endl;
    }
}