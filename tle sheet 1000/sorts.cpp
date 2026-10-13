#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string t=s;
    sort(t.begin(),t.end());
    bool hai=false;
    int first;
    char lasti;
    int last;
    for(int i=0;i<s.length();i++){
        if(s[i]!=t[i]){
            hai=true;
            first=i+1;
            lasti=t[i];
            break;
        }
    }
    if(!hai){
        cout<<"NO"<<endl;
    }
    else{
        for(int i=first;i<s.length();i++){
            if(s[i]==lasti){
                last=i+1;
                cout<<"YES"<<endl;
                cout<<first<<" "<<last<<endl;
                break;
            }
        }
    }
}