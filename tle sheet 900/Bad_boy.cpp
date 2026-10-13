#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,m,i,j;
        cin>>n>>m>>i>>j;
        long long drow[4]={1,1,n,n};
        long long dcol[4]={1,m,1,m};
        int maxr=0;
        int maxc;
        long long dist=-1;
        for(int k=0;k<4;k++){
            long long d=abs(i-drow[k])+abs(j-dcol[k]);
            if(d>dist){
                dist=d;
                maxr=k;
            }
        }
        if(maxr==0){
            maxc=3;
        }
        else if(maxr==3){
            maxc=0;
        }
        else if(maxr==1){
            maxc=2;
        }
        else{
            maxc=1;
        }
        cout<<drow[maxr]<<" "<<dcol[maxr]<<" "<<drow[maxc]<<" "<<dcol[maxc]<<endl;
    }
}