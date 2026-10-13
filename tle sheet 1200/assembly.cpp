#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int size=0;
        if(n%2==0){
            size=(n/2)*(n-1);
        }
        else{
            size=((n-1)/2)*n;
        }
        vector<long long>b(size);
        for(int i=0;i<size;i++){
            cin>>b[i];
        }
        sort(b.begin(),b.end());
        vector<long long>ans;
        int count=n-1;
        for(int i=0;i<size && count>0;){
            ans.push_back(b[i]);
            i+=count;
            count--;
        }
        int l=ans.size();
        for(int i=0;i<l;i++){
            cout<<ans[i]<<" ";
        }cout<<ans[l-1]<<endl;
    }
}