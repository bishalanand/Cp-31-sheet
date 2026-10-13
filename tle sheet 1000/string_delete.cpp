#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        string b;
        cin>>b;
        int ans=0;
        for(int i=0;i<a.length();i++){
            for(int j=0;j<b.length();j++){
                int count=0;
                if(a[i]==b[j]){
                    int idx1=i;
                    int idx2=j;
                    int count=0;
                    while(idx1<a.length() && idx2<b.length() && a[idx1++]==b[idx2++])count++;
                    ans=max(ans,count);
                }
            }
        }
        ans=a.length()+b.length()-(2*ans);
        cout<<ans<<endl;
    }
}