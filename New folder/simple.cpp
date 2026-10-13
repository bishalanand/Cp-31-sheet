#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.length();
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]){
            if(i!=(n-1)){
                for(int j=0;j<26;j++){
                    char c='a'+j;
                    if(c!=s[i+1] && c!=s[i]){
                        s[i]=c;
                        break;
                    }
                }
            }
            else{
                for(int j=0;j<26;j++){
                    char c='a'+j;
                    if(c!=s[i-1] && c!=s[i]){
                        s[i]=c;
                        break;
                    }
                }
            }
        }
    }
    cout<<s<<endl;
}
