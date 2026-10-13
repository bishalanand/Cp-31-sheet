#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        int count0=0;
        int count1=0;
        bool ans=false;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                count0++;
            }
            else{
                count1++;
            }
        }
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                if(count1==0){
                    cout<<count0<<endl;
                    ans=true;
                    break;
                }
                else{
                    count1--;
                }

            }
            else{
                if(count0==0){
                    cout<<count1<<endl;
                    ans=true;
                    break;
                }
                else{
                    count0--;
                }
            }
        }
        if(!ans){
            cout<<0<<endl;
        }
    }
}