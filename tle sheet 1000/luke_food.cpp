#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,d;
        cin>>n>>d;
        long long a,b;
        a=-1;
        b=-1;
        int ans=0;
        for(int i=0;i<n;i++){
            long long x;
            cin>>x;
            long long a1=x-d;
            if(a1<0){
                a1=0;
            }
            long long b1=x+d;
            if(a>b1 || a1>b){
                ans++;
                a=a1;
                b=b1;
            }
            else{
                a=max(a,a1);
                b=min(b,b1);
            }
        }
        cout<<ans-1<<endl;
    }
}