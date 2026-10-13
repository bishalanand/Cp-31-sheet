#include<iostream>
#include<vector>
#include<unordered_set>
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
        unordered_set<long long>see;
        see.insert(0);
        long long sum=0;
        bool milla=true;
        bool ans=false;
        for(int i=0;i<n;i++){
             if (i % 2 == 0)
                sum += a[i];
            else
                sum -= a[i];

            if (see.find(sum) != see.end()) {
                ans = true;
                break;
            }

            see.insert(sum);
        }
        if(ans){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}