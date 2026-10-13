#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;

long long gcd(long long a,long long b){
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
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
        if(n<=2){
            if(n==1){
                cout<<0<<endl;
            }
            else{
                cout<<abs(a[1]-a[0])<<endl;
            }
            continue;
        }
        else{
            int l=0;
            int h=n-1;
            long long ans=abs(a[h]-a[l]);
            l++;
            h--;
            while(l<h){
                ans=gcd(ans,abs(a[h]-a[l]));
                l++;
                h--;
            }
            cout<<ans<<endl;
        }
    }
}