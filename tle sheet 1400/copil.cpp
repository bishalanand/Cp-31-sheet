#include<iostream>
#include<vector>
#include<unordered_map>
#include<map>
#include<queue>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<int,vector<int>>adj;
        map<pair<int,int>,int>mpp;
        vector<int>vis(n+1,false);
        for(int i=1;i<n;i++){
            int x,y;
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
            pair<int,int>key={x,y};
            pair<int,int>key2={y,x};
            mpp[key]=i;
            mpp[key2]=i;
        }
        vis[1]=true;
        queue<vector<int>>q;
        q.push({1,0,1});
        int edgec=0;
        int ans=-1;
        while(!q.empty()){
            int node=q.front()[0];
            int tim=q.front()[1];
            int time=q.front()[2];
            q.pop();
            ans=max(ans,time);
            for(auto nodes:adj[node]){
                if(!vis[nodes]){
                    pair<int,int>key={nodes,node};
                    if(mpp[key]>tim){
                        q.push({nodes,mpp[key],time});
                    }
                    else{
                        q.push({nodes,mpp[key],time+1});
                    }
                    vis[nodes]=true;
                    edgec++;
                }
            }
        }
        cout<<ans<<endl;
    }
}