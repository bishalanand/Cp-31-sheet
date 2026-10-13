#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>poss(1e6+1,0);
    for(int i=2;i<=1000;i++){
        long long make=i*i*i;
        long long make2=(make-1)/(i-1);
        while(make2<=1e6){
            poss[make2]=1;
            make=make*i;
            make2=(make-1)/(i-1);
        }
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(poss[n]==1){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}