#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        for(int i=0;i<n;i++){
            char x;
            cin>>x;
            s+=x;
        }
        //hai=true for > hai =false for <
        bool hai;
        if(s[0]=='>'){
            hai=true;
        }
        else{
            hai=false;
        }
        int count=0;
        int i=0;
        while(i<n){
            if(hai){
                int j=i;
                int ccount=1;
                while(j<n && s[j]=='>'){
                    ccount++;
                    j++;
                }
                if(ccount-count>0){
                    count+=(ccount-count);
                }
                hai=false;
                i=j;
            }
            else{
                int j=i;
                int ccount=1;
                while(j<n && s[j]=='<'){
                    ccount++;
                    j++;
                }
                if(ccount-count>0){
                    count+=(ccount-count);
                }
                hai=true;
                i=j;
            }
        }
        cout<<count<<endl;
    }
}