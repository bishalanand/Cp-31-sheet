#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long k,x;
    cin>>k>>x;
    vector<long long>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int ans=n;
    vector<long long>diff;
    for(int i=0;i<n-1;i++){
        long long gap=a[i+1]-a[i];
        if(gap<=x){
            ans--;
        }
        else{
            diff.push_back((gap-1)/x);
        }
    }
    sort(diff.begin(),diff.end());
    for(auto need:diff){
        if(k>=need){
            ans--;
            k-=need;
        }
    }
    cout<<ans<<endl;
}