#include<iostream>
using namespace std;

int main(){
    int mod=1e9+7;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long sum=1;
        for(int i=2;i<=n;i++){
            long long add=i+i-1;
            long long product=1LL*i*add;
            sum+=product;
        }
        sum=1LL*sum*2022;
        cout<<sum%mod<<endl;
    }
}