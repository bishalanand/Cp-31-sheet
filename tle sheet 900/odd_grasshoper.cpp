#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,n;
        cin>>x>>n;
        long long arr[4]={-n,1,n+1,0};
        int k=n%4;
        if(k==0){
            k=4;
        }
        if(x%2==0){
            cout<<x+arr[k-1]<<endl;
        }
        else{
            cout<<x-arr[k-1]<<endl;
        }
    }
}