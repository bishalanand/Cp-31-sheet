#include<iostream>
using namespace std;


long long gcd(long long a,long long b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
long long lcm(long long a,long long b){
    if(a==0 || b==0){
        return 0;
    }
    return (a/gcd(a,b))*b;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,x,y;
        cin>>n>>x>>y;
        long long lc=lcm(x,y);
        x=n/x;
        y=n/y;
        x=x-(n/lc);
        y=y-(n/lc);
        long long ans=0;
        if((n+1)%2==0){
            ans+=((n+1)/2)*n;
        }
        else{
            ans+=(n/2)*(n+1);
        }
        if((n-x)%2==0){
            ans-=((n-x)/2)*(n-x+1);
        }
        else{
            ans-=((n-x+1)/2)*(n-x);
        }
        long long minus=(1LL*y*(y+1))/2;
        cout<<ans-minus<<endl;
    }
}