#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<long long>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(k>=3){
            cout<<0<<endl;
        }
        else if(k==1){
            sort(a.begin(),a.end());
            cout<<a[1]-a[0]<<endl;
        }
        else{
            vector<long long>b;
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    b.push_back(abs(a[j]-a[i]));
                }
            }
            sort(b.begin(),b.end());
            long long take=LLONG_MAX;
            for(auto i:a){
                for(auto j:b){
                    take=min(take,abs(j-i));
                }
            }
            cout<<min(take,b[0])<<endl;
        }
    }
}