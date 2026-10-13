#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int ne;
        cin>>ne;
        int count=0;
        int p=0;
        int n=0;
        for(int i=0;i<ne;i++){
            int x;
            cin>>x;
            if(x==1){
                p++;
            }
            else{
                n++;
            }
        }
        while(p<n){
            count++;
            p++;
            n--;
        }
        if(n%2==0){
            cout<<count<<endl;
        }
        else{
            count++;
            cout<<count<<endl;
        }
    }
    return 0;
}