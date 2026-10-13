#include<iostream>
#include<unordered_map>
#include<vector>
#include<queue>
#include<list>
#include<algorithm>
using namespace std;


struct node{
    int curr;
    int prev;
    vector<int>pre;
};
bool ch(int curr,int prev,vector<int>p,unordered_map<int,unordered_map<int,int>>&par){
    bool ans=true;
    for(int i=0;i<p.size();i++){
        if(par.find(i)!=par.end()){
            if(par[i].find(prev)!=par[i].end()){
                if(par[i][prev]!=curr){
                    return false;
                }
            }
        }
    }
    return true;
}
vector<int>find(int src,int tar,int n,unordered_map<int,list<int>>&adj,unordered_map<int,unordered_map<int,int>>&par){
    vector<int>parent(n+1,-1);
    vector<bool>vist(n+1,false);
    queue<node>q;
    q.push({src,-1,{src}});
    parent[src]=-1;
    while(!q.empty()){
        auto &[curr,prev,p]=q.front();
        q.pop();
        if(curr==tar)return parent;
        for(auto i:adj[curr]){
            if(ch(i,curr,p,par) && !vist[i]){
                parent[i]=curr;
                vector<int>&dekh=p;
                dekh.push_back(i);
                q.push({i,curr,dekh});
            }
        }
    }
    return {};
}
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    unordered_map<int,list<int>>adj;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    unordered_map<int,unordered_map<int,int>>par;
    for(int i=0;i<k;i++){
        int x,y,z;
        cin>>x>>y>>z;
        par[x][y]=z;
    }
    vector<int>parent=find(1,n,n,adj,par);
    if(parent.empty()){
        cout<<-1<<endl;
    }
    else{
        bool no=true;
        vector<int>ans;
        queue<int>an;
        an.push(n);
        while(!an.empty()){
            int t=an.front();
            an.pop();
            if(parent[t]==-1){
                cout<<-1<<endl;
                no=false;
                break;
            }
            ans.push_back(t);
            an.push(parent[t]);
        }
        if(no){
            reverse(ans.begin(),ans.end());
            cout<<ans.size()<<endl;
            for(int i=0;i<n;i++){
                cout<<ans[i]<<endl;
            }cout<<endl;
        }
    }
    return 0;
}