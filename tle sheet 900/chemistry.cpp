#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;

        unordered_map<char,int> mp;
        for(char c: s) mp[c]++;

        int odd = 0;
        for(auto &p: mp){
            if(p.second % 2 == 1) odd++;
        }

        int si = n - k;                
        int final_odd = max(0, odd - k);
        if(final_odd <= (si % 2))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
