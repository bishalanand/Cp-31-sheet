#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int find(long long x,vector<long long>&b){
    int left=0;
    int right=b.size()-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(b[mid]==x){
            return mid;
        }
        else if(b[mid]<x){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return -1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>a(n),prefix(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<long long>b=a;
        sort(b.begin(),b.end());
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=b[i];
            prefix[i]=sum;
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            int idx1 = upper_bound(b.begin(), b.end(), a[i]) - b.begin() - 1;
            long long cnt = upper_bound(b.begin(), b.end(), prefix[idx1]) - b.begin();
            ans.push_back(cnt-1);
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }cout<<endl;
    }
}