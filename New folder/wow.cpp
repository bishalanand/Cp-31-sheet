#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.length();
    unordered_map<int,long long>pref;
    unordered_map<int,long long>suff;
    int i=n-1;
    long long mcount=0;
    while(i>=0){
        int j=i;
        long long count=0;
        while(j>=0 && s[j]!='o'){
            count++;
            j--;
        }
        if(count>1){
            mcount+=(count-1);
        }
        if(j>=0)pref[j]=mcount;
        i=j-1;
    }
    i=0;
    mcount=0;
    while(i<n){
        int j=i;
        long long count=0;
        while(j<n && s[j]!='o'){
            count++;
            j++;
        }
        if(count>1){
            mcount+=(count-1);
        }
        if(j<n)suff[j]=mcount;
        i=j+1;
    }
    long long ans=0;
    for(auto i:pref){
        if(suff.count(i.first)){
            ans+=(1LL*i.second*suff[i.first]);
        }
    }
    cout<<ans<<endl;

}