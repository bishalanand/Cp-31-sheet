#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long sum=0;
        long long mini=LLONG_MAX;
        int count=0;
        bool z=false;
        for(int i=0;i<n;i++){
            if(a[i]<0){
                count++;
            }
            else if(a[i]==0){
                z=true;
            }
            sum+=abs(a[i]);
            mini=min(mini,abs(a[i]));
        }
        if(z){
            cout<<sum<<endl;
        }
        else{
            if(count%2==0){
                cout<<sum<<endl;
            }
            else{
                cout<<sum-(2*mini)<<endl;
            }
        }
    }
}
