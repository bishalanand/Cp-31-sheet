#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int coune=0;
        int couno=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x%2==0){
                coune++;
            }
            else{
                couno++;
            }
        }
        if(couno%2!=0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}