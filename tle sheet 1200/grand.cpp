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
        cin>>s;
        char a='.';
        char b='.';
        int l=0;
        int r=n-1;
        while(l<r){
            if(s[l]!=s[r]){
                a=s[l];
                b=s[r];
                break;
            }
            l++;
            r--;
        }
        if(a=='.'){
            cout<<0<<endl;
            continue;
        }
        //for a
        int ansa=0;
        int l1=l;
        int r1=r;
        bool milla=false;
        while(l1<r1){
            if(s[l1]!=s[r1]){
                if(s[l1]==a){
                    ansa++;
                    l1++;
                }
                else if(s[r1]==a){
                    ansa++;
                    r1--;
                }
                else {
                    milla=true;
                    break;
                }
            }
            else{
                l1++;
                r1--;
            }
        }
        int ansb=0;
        l1=l;
        r1=r;
        bool millb=false;
        while(l1<r1){
            if(s[l1]!=s[r1]){
                if(s[l1]==b){
                    ansb++;
                    l1++;
                }
                else if(s[r1]==b){
                    ansb++;
                    r1--;
                }
                else{
                    millb=true;
                    break;
                }
            }
            else{
                l1++;
                r1--;
            }
        }
        if(milla && millb){
            cout<<-1<<endl;
        }
        else if(milla){
            cout<<ansb<<endl;
        }
        else if(millb){
            cout<<ansa<<endl;
        }
        else{
            cout<<min(ansa,ansb)<<endl;
        }
        
    }
}