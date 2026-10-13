#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        string s;
        cin>>s;
        int first=0,last=0,between=0;
        int i=0;
        int n=s.length();
        while(i<n && s[i]=='1'){
            first++;
            i++;
        }
        int count=0;
        for(int j=0;j<n;j++){
            if(s[j]=='0'){
                between=max(between,count);
                count=0;
            }
            else{
                count++;
            }
        }
        between = max(between, count);
        if(between==n){
            cout<<1LL*n*n<<endl;
            continue;
        }
        int j=n-1;
        while(j>=0 && s[j]=='1'){
            last++;
            j--;
        }
        long long ans=0;
        first=max(between,(first+last));
        first++;
        int ni=first/2;
        if(first%2!=0){
            ans=1LL*ni*(ni+1);
        }
        else{
            ans=1LL*ni*ni;
        }
        cout<<ans<<endl;
    }
    
}