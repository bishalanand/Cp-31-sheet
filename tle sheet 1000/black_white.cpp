#include<iostream>
#include<string>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int count=0;
        vector<int>a(n);
        for(int i=n-1;i>=0;i--){
            if(s[i]=='B'){
                count++;
            }
            a[i]=count;
        }
        int l=0;
        int r=k-1;
        int ansi=INT_MAX;
        while(r<n){
            int hai;
            if(s[r]=='B'){
                hai=a[l]-a[r]+1;
            }
            else{
                hai=a[l]-a[r];
            }
            ansi=min(ansi,k-hai);
            l++;
            r++;
        }
        cout<<ansi<<endl;
    }
}
