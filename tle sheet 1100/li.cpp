#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long long k;
        cin>>n>>k;
        vector<vector<int>>a(n,vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        int l=0;
        int h=n-1;
        long long req=0;
        while(l<=h){
            int j=n-1;
            int limit=n;
            if(l==h){
                limit=n/2;
            }
            for(int i=0;i<limit;i++){
                if(a[l][i]!=a[h][j]){
                    req++;
                }
                j--;
            }
            l++;
            h--;
        }
        if(k-req<0){
            cout<<"No"<<endl;
        }
        else{
            if(n%2!=0){
                cout<<"Yes"<<endl;
            }
            else{
                if((k-req)%2==0){
                    cout<<"Yes"<<endl;
                }
                else{
                    cout<<"No"<<endl;
                }
            }
        }
        
    }
}