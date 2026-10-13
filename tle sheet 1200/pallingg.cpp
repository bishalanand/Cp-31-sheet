#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int coun=0;
        bool bob=false;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                coun++;
            }
        }
        if(coun%2==0){
            cout<<"BOB"<<endl;
        }
        else{
            if(coun==1){
               cout<<"BOB"<<endl; 
            }
            else{
                cout<<"ALICE"<<endl;
            }
        }
    }
}