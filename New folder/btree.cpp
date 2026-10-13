#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
using namespace std;

pair<int,int> solve(int node,int &count,unordered_map<int,vector<int>>&graph,string &s){
    int white=0;
    int black=0;
    for(auto i:graph[node]){
        pair<int,int>ans=solve(i,count,graph,s);
        white+=ans.first;
        black+=ans.second;
    }
    if(s[node-1]=='W'){
        white++;
    }
    else{
        black++;
    }
    if(white==black){
        count++;
    }
    return {white,black};
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<int,vector<int>>graph;
        for(int i=2;i<=n;i++){
            int x;
            cin>>x;
            graph[x].push_back(i);
        }
        string s;
        cin>>s;
        int count=0;
        pair<int,int>so=solve(1,count,graph,s);
        cout<<count<<endl;
    }
}
