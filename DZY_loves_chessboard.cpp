#include<iostream>
#include<vector>
#include<string>
using namespace std;
void dfs(int row,int col,char fill,vector<string>&board){
    int m=board.size();
    int n=board[0].size();
    if(row>=m || col>=n || row<0 ||col<0){
        return ;
    }
    board[row][col]=fill;
    int drow[]={0,1,-1,0};
    int dcol[]={-1,0,0,1};
    for(int i=0;i<4;i++){
        int vrow=row+drow[i];
        int vcol=col+dcol[i];
        if(vrow>=0 && vcol>=0 && vrow<m && vcol<n && board[vrow][vcol]=='.'){
            if(fill=='B'){
                dfs(vrow,vcol,'W',board);
            }
            else{
                dfs(vrow,vcol,'B',board);
            }
        }
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<string>board;
    for(int i=0;i<n;i++){
        string oner;
        cin>>oner;
        board.push_back(oner);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(board[i][j]=='.'){
                dfs(i,j,'B',board);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<board[i]<<endl;
    }
}