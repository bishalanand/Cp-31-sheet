#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char check;
        cin>>check;
        string s;
        cin>>s;
        int i=0,j=0;
        int ans=0;
        int ifgreen=-1;
        for(int i=0;i<n;i++){
            if(s[i]=='g'){
                ifgreen=i;
                break;
            }
        }
        while(i<n){
            if(j<i)j=i;
            if(s[i]==check){
                while(j<n && s[j]!='g'){
                    j++;
                }
                if(j<n){
                    ans=max(ans,j-i);
                }
                else{
                    ans=max(ans,j-i+ifgreen);
                }
            }
            i++;
        }
        cout<<ans<<endl;
    }
}