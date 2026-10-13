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
        long long global=LLONG_MAX;
        vector<long long>ssum;
        for(int i=0;i<n;i++){
            int m;
            cin>>m;
            long long a,b;
            cin>>a>>b;
            if(a>b)swap(a,b);
            for(int j=2;j<m;j++){
                long long x;
                cin>>x;
                if(x<a){
                    b=a;
                    a=x;
                }
                else if(x<b){
                    b=x;
                }
            }
            global=min(global,a);
            ssum.push_back(b);
        }
        sort(ssum.begin(),ssum.end());
        for(int i=1;i<=n-1;i++){
            global+=ssum[n-i];
        }
        cout<<global<<endl;
    }
}