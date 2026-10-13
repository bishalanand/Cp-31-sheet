#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        vector<int>a(n,0);
        int len=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a[i]=x;
            if(x==1){
                len++;
            }
        }
        if(len<s){
            cout<<-1<<endl;
            continue;
        }
        if(len==s){
            cout<<0<<endl;
            continue;
        }
        int l=0,r=0;
        int count=0;
        int maxlen=0;
        while(l<n && r<n){
            if(a[r]==1){
                count++;
            }
            while(count>s){
                if(a[l]==1){
                    count--;
                }
                l++;
            }
            maxlen=max(maxlen,r-l+1);
            r++;

        }
        cout<<n-maxlen<<endl;

    }
}