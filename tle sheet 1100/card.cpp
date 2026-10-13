#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long long k;
        cin>>n;
        cin>>k;
        vector<long long>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        long long a=4*n;
        long long b=0;
        long long c=0;
        for(int i=0;i<n;i++){
            b+=(1LL*nums[i]*4);
            c+=(1LL*nums[i]*nums[i]);
        }
        c-=k;
        long double D = (long double)b*b - 4.0L*a*c;

        long long w = (long long)((-b + sqrtl(D)) / (2LL * a));
        while(4*n*w*w + b*w + c > 0) w--;
        while(4*n*(w+1)*(w+1) + b*(w+1) + c <= 0) w++;
        cout<<w<<endl;
    }
}