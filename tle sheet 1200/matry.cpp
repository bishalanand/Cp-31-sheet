#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        map<long long,long long>freq;
        for(int i=0;i<n;i++){
            freq[a[i]]++;
        }
        
        long long ans=0;
        for(int i=0;i<n;i++){
            if(freq.find(a[i])!=freq.end() && freq[a[i]]>0){
                ans++;
                long s=a[i];
                while(freq.find(s)!=freq.end() && freq[s]>0){
                    freq[s]--;
                    s++;
                }
            }
        }
        cout<<ans<<endl;
    }
}