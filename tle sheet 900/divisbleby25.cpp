#include<iostream>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int size=s.length();
        int ans=INT_MAX;
        string end[4]={"00","25","50","75"};
        for(int e=0;e<4;e++){
            int cnt=0;
            int p=size-1;
            while(p>=0 && s[p]!=end[e][1]){
                cnt++;
                p--;
            }
            if(p<0)continue;
            p--;
            while(p>=0 && s[p]!=end[e][0]){
                cnt++;
                p--;
            }
            if(p<0)continue;
            ans=min(ans,cnt);
        }
        if(ans==INT_MAX){
            cout<<size-1<<endl;
        }
        else{
            cout<<ans<<endl;
        }
        
    }
}