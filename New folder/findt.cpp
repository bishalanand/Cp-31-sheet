#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n+1,0);
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        vector<int>last(n+1,0);
        int id=1;
        while(id<=n){
            int j=id;
            while(j<=n && a[j]==a[id]){
                j++;
            }
            int ct=j;
            j--;
            while(j>=id){
                last[j]=ct;
                j--;
            }
            id=ct;
        }
        int q;
        cin>>q;
        while(q--){
            int l,r;
            cin>>l>>r;
            if(last[l]<=r){
                cout<<l<<" "<<last[l]<<endl;
            }
            else{
                cout<<-1<<" "<<-1<<endl;
            }
        }
    }
}