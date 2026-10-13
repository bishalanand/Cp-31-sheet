#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool odd=false;
        bool even=false;
        vector<long long>a(n);
        for(int i=0;i<n;i++){
            long long x;
            cin>>x;
            if(x%2==0){
                even=true;
            }
            else{
                odd=true;
            }
            a[i]=x;
        }
        if(odd && even){
            cout<<2<<endl;
        }
        else{
            bool ans=false;
            long long num=2;
            while(!ans){
                set<long long>rem;
                for(int i=0;i<n;i++){
                    rem.insert(a[i]%num);
                }
                if(rem.size()==2){
                    ans=true;
                    break;
                }
                num<<=1;

            }
            cout<<num<<endl;
        }
    }
}