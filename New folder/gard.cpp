#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<int,int>freq;
        unordered_map<int,vector<int>>onetime;
        unordered_set<int>see;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            for(int j=0;j<x;j++){
                int y;
                cin>>y;
                freq[y]++;
                onetime[y].push_back(i);
            }
        }
        int ans=true;
        for(auto i:freq){
            if(i.second==1){
                ans=false;
                see.insert(onetime[i.first][0]);
            }
        }
        if(ans){
            cout<<"Yes"<<endl;
        }
        else{
            if(see.size()!=n){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }

    }
}
