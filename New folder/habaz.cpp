#include<iostream>
#include<vector>
#include<queue>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<vector<int>>graph(n+1);
    for(int i=0;i<n-1;i++){
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    vector<int>col(n+1,-1);
    col[1]=0;
    queue<int>q;
    q.push(1);
    while(!q.empty()){
        int top=q.front();
        q.pop();
        for(auto i:graph[top]){
            if(col[i]==-1){
                col[i]=1-col[top];
                q.push(i);
            }
        }
    }
    int countr=0;
    int cppi=0;
    for(int i=1;i<=n;i++){
        if(col[i]==0){
            countr++;
        }
        else if(col[i]==-1){
            cppi++;
        }
    }
    int ali=n-(countr+cppi);
    long long check=1LL*countr*ali;
    cout<<check-(n-1)<<endl;
}