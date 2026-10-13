#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,x;
        cin>>n>>x;
        int m;
        cin>>m;
        vector<long long>a(2,0);
        int idx=-1;
        for(int i=0;i<m;i++){
            long long l,r;
            cin>>l>>r;

            if(l<=x && r>=x && idx==-1){
                idx=i;
                a[0]=l;
                a[1]=r;
            }
            else if(idx!=-1){
                if(l>=a[0] && l<=a[1]){
                    a[0]=min(a[0],l);
                    a[1]=max(a[1],r);
                }
                else if(l<=a[0] && r>=a[0]){
                    a[0]=min(a[0],l);
                    a[1]=max(a[1],r);
                }
            }
        }
        cout<<a[1]-a[0]+1<<endl;

    }
}