#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int ansl=-1;
        int ansr=-1;
        int small=1;
        int large=n;
        int l=0;
        int r=n-1;
        int ans=false;
        while(l<r){
            if(a[l]==small){
                small++;
                l++;
            }
            if(a[l]==large){
                large--;
                l++;
            }
            if(a[r]==small){
                small++;
                r--;
            }
            if(a[r]==large){
                large--;
                r--;
            }
            if(a[l]!=small && a[l]!=large && a[r]!=small && a[r]!=large){
                ansl=l;
                ansr=r;
                ans=true;
                break;
            }
        }
        if(!ans){
            cout<<-1<<endl;
        }
        else{
            cout<<ansl+1<<" "<<ansr+1<<endl;
        }

    }
}