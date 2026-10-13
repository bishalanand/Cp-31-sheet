#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        unordered_set<char>seen;
        int ans=0;
        for(int i=0;i<n-1;i++){
            if(seen.find(s[i])==seen.end()){
                ans+=(n-i-1);
                seen.insert(s[i]);
            }
        }
        seen.insert(s[n-1]);
        cout<<ans+seen.size()<<endl;
    }
    return 0;
}
