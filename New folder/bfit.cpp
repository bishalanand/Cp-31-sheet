#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,w;
        cin>>n>>w;
        vector<int>a(n);
        vector<int>used(21,0);
        for(int i=0;i<n;i++){
            cin>>a[i];
            used[log2(a[i])]++;
        }
        int height=0;
        int countb=0;
        while(countb<n){
            int temp=w;
            for(int i=20;i>=0;i--){
                while(used[i]>0 && (1<<i)<=temp){
                    temp-=(1<<i);
                    used[i]--;
                    countb++;
                }
            }
            height++;
        }
        cout<<height<<endl;
    }
}