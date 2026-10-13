#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<long long,int>>a;
        for(int i=0;i<n;i++){
            long long need=LLONG_MIN;
            int k;
            cin>>k;
            for(int j=0;j<k;j++){
                long long x;
                cin>>x;
                need=max(need,x-j+1);
            }
            a.push_back({need,k});
        }
        sort(a.begin(),a.end());
        long long power=0;
        long long killed=0;
        for(auto i:a){
            power=max(power,i.first-killed);
            killed+=i.second;
        }
        cout<<power<<endl;
    }
}