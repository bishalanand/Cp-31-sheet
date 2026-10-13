#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>v(m);
        for(int i=0;i<m;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        vector<int>gap;
        for(int i=0;i<m-1;i++){
            gap.push_back(v[i+1]-v[i]-1);
        }
        gap.push_back(v[0] + n - v[m - 1] - 1);
        sort(gap.rbegin(),gap.rend());
        int save=0,time=0;
        for(auto g:gap){
            int curr=g-time*2;
            if(curr>0){
                save++;
                curr-=2;
                if(curr>0){
                    save+=curr;
                }
                time+=2;
            }

        }
        cout<<n-save<<endl;
    }
}