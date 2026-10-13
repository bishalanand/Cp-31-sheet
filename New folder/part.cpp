#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    vector<long long>freq(1e9+1,0);
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        freq[a[i]]++;
    }
    vector<int>ans;
    for(int i=0;i<n;i++){
        long long check=sum-a[i];
        freq[a[i]]--;
        if(check%2==0 && (check/2)<1e9+1 && freq[check/2]>=1){
                ans.push_back(i+1);
        }
        freq[a[i]]++;

    }
    cout<<ans.size()<<endl;
    for(auto i:ans){
        cout<<i<<" ";
    }cout<<endl;
}