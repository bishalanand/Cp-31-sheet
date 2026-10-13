#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    vector<long long>a(n);
    vector<int>last(n,0);
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    long long global=-1;
    long long last_time=0;
    for(int i=1;i<=q;i++){
        int o;
        cin>>o;
        if(o==1){
            int idx;
            long long val;
            cin>>idx;
            cin>>val;
            if(last[idx-1]<last_time){
                a[idx-1]=global;
            }
            sum-=a[idx-1];
            sum+=val;
            a[idx-1]=val;
            last[idx-1]=i;
        }
        else{
            long long valu;
            cin>>valu;
            sum=1LL*valu*n;
            global=valu;
            last_time=i;
        }
        cout<<sum<<endl;
    }
}