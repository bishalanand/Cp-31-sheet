#include<iostream>
#include<set>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int xk,yk;
        cin>>xk>>yk;
        int xq,yq;
        cin>>xq>>yq;
        int posix[8]={+a,+a,-a,-a,+b,+b,-b,-b};
        int posiy[8]={-b,+b,-b,+b,-a,+a,-a,+a};
        int count=0;
        set<pair<int,int>>pq;
        for(int i=0;i<8;i++){
            int x=xk+posix[i];
            int y=yk+posiy[i];
            pq.insert({x,y});
        }
        for(auto &p:pq){
            int x=p.first;
            int y=p.second;
            for(int i=0;i<8;i++){
                int cx=x+posix[i];
                int cy=y+posiy[i];
                if(cx==xq && cy==yq){
                    count++;
                    break;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
} 