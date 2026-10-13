#include<iostream>
using namespace std;

bool isp(long long n){
    if (n < 2) return false;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        long long num1=1+a;
        while(!isp(num1))num1++;
        long long num2=num1+a;
        while(!isp(num2))num2++;
        long long ans=1LL*num1*num2;
        cout<<ans<<endl;
    }
}