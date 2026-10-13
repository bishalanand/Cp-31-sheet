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
        vector<vector<long long>>mat(n,vector<long long>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>mat[i][j];
            }
        }
        long long ans=0;
        for(int i=0;i<m;i++){
            vector<long long>a(n);
            for(int j=0;j<n;j++){
                a[j]=mat[j][i];
            }
            sort(a.begin(),a.end());
            for(int j=n-1;j>=0;j--){
                ans+=((2*j)-n+1)*a[j];
            }
        }
        cout<<ans<<endl;
    }
}