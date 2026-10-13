#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<pair<long long,int>> fidi(long long n){
    vector<pair<long long,int>>p;
    if(n%2==0){
        int count=0;
        while(n%2==0){
            count++;
            n/=2;
        }
        p.push_back({2,count});   
    }
    for(long long i=3;i*i<=n;i++){
        if(n%i==0){
            int count=0;
            while(n%i==0){
                count++;
                n/=i;
            }
            p.push_back({i,count});
        }
    }
    if(n>1){
        p.push_back({n,1});
    }
    return p;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<pair<long long,int>>primef=fidi(n);
        if(primef.size()>=3){
            cout<<"Yes"<<endl;
            long long a=primef[0].first;
            long long b=primef[1].first;
            cout<<a<<" "<<b<<" "<<n/(1LL*a*b)<<endl;;
        }
        else if(primef.size()==2){
            int count=0;
            for(auto i:primef){
                count+=i.second;
            }
            if(count>=4){
                cout<<"Yes"<<endl;
                long long a=primef[0].first;
                long long b=primef[1].first;
                cout<<a<<" "<<b<<" "<<n/(1LL*a*b)<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
        else{
            if(primef[0].second>=6){
                cout<<"yes"<<endl;
                long long a=primef[0].first;
                long long b=1LL*primef[0].first*primef[0].first;
                cout<<a<<" "<<b<<" "<<n/(1LL*a*b)<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }
}