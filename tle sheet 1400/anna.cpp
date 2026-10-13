#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<long long>pow(10);
    long long pow10=10;
    for(int i=9;i>=0;i--){
        pow[i]=pow10;
        pow10*=10;
    }
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<long long>a(n);
        vector<bool>check(n,false);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<long long>cheki;
        vector<long long>del;
        bool hai=false;
        for(int po=0;po<10;po++){
            for(int i=0;i<n;i++){
                if(!check[i] && a[i]%pow[po]==0){
                    if(hai){
                        del.push_back(a[i]);
                    }
                    else{
                        cheki.push_back(a[i]/pow[po]);
                    }
                    hai=!hai;
                    check[i]=true;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(!check[i]){
                del.push_back(a[i]);
            }
        }
        int count=0;
        for(auto i:cheki){
            long long num=i;
            while(num>0){
                count++;
                num/=10;
            }
        }
        for(auto i:del){
            long long num=i;
            while(num>0){
                count++;
                num/=10;
            }
        }
        if(count>m){
            cout<<"Sasha"<<endl;
        }
        else{
            cout<<"Anna"<<endl;
        }

    }

}