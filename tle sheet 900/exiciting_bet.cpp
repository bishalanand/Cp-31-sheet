#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        if(b==a){
            cout<<0<<" "<<0<<endl;
            continue;
        }
        if(a>b){
            swap(a,b);
        }
        long long gcd=b-a;
        long long move=min(a%gcd,gcd-b%gcd);
        cout<<gcd<<" "<<move<<endl;
    }
}
