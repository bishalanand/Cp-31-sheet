#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        string t;
        cin>>t;
        if(s==t){
            cout<<"yes"<<endl;
            continue;
        }
        if(t.length()>s.length()){
            cout<<"NO"<<endl;
            continue;
        }
        int i=s.length()-1;
        int j=t.length()-1;
        vector<pair<char,int>>milla;
        unordered_map<char,int>freq;
        bool hai=true;
        while(i>=0 && j>=0){
            if(s[i]==t[j]){
                milla.push_back({t[j],i});
                freq[t[j]]++;
                j--;
            }
            i--;
        }
        if(milla.size()!=t.length()){
            cout<<"NO"<<endl;
            continue;
        }
        for(auto &c:milla){
            char find=c.first;
            int idx=c.second;
            for(int k=idx+1;k<s.length();k++){
                if(s[k]==find){
                    if(freq[s[k]]>1){
                        freq[s[k]]--;
                    }
                    else{
                        hai=false;
                        break;
                    }
                }
                if(!hai){
                    break;
                }
            }
        }
        if(hai){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}