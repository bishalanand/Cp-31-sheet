#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long long l,r;
        cin>>n>>l>>r;
        vector<long long>ans;
        bool ansi=true;
        for(int i=1;i<=n;i++){
            long long val;
            if(l%i==0){
                val=l;
            }
            else{
                val=l+(i-(l%i));
            }
            if(val>r){
                ansi=false;
                break;
            }
            ans.push_back(val);
        }
        if(!ansi){
            cout<<"No"<<endl;
        }
        else{
            cout<<"yes"<<endl;
            for(int i=0;i<ans.size();i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }

    }
}