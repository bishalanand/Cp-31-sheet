#include<iostream>
#include<string>
#include<unordered_set>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        unordered_set<char>visitp;
        vector<int>pref(n);
        vector<int>suff(n);
        for(int i=0;i<n;i++){
            if(visitp.find(s[i])==visitp.end()){
                visitp.insert(s[i]);
            }
            pref[i]=visitp.size();
        }
        visitp.clear();
        for(int i=n-1;i>=0;i--){
            if(visitp.find(s[i])==visitp.end()){
                visitp.insert(s[i]);
            }
            suff[i]=visitp.size();
        }
        int ans=0;
        for(int i=0;i<n-1;i++){
            ans=max(ans,pref[i]+suff[i+1]);
       }
       cout<<ans<<endl;
    }
}