#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        sort(a.begin(),a.end());
        vector<int>c;
        vector<int>b;
        bool hai=true;
        b.push_back(a[0]);
        int i=1;
        while(i<n && a[i]==a[0]){
            if(i==n-1){
                hai= false;
                break;
            }
            b.push_back(a[i]);
            i++;
        }
        if(hai){
            c.push_back(a[i]);
            for(int j=i+1;j<n;j++){
                if(a[j]%c[0]==0){
                    c.push_back(a[j]);
                }
                else{
                    b.push_back(a[j]);
                }
            }
            cout<<b.size()<<" "<<c.size()<<endl;
            for(auto it:b){
                cout<<it<<" ";
            }cout<<endl;
            for(auto it:c){
                cout<<it<<" ";
            }cout<<endl;
        }
        else{
            int ans=-1;
            cout<<ans<<endl;
        }
    }
}