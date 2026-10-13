#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        int count2=0;
        int count3=0;
        int i=2;
        bool noans=false;
        while(n!=1){
            if(n%2==0){
                n/=2;
                count2++;
            }
            else if(n%3==0){
                n/=3;
                count3++;
            }
            else{
                noans=true;
                break;
            }
        }
        if(noans || count2>count3){
            cout<<-1<<endl;
            continue;
        }
        int two=count3-count2;
        int ans=count2+(two*2);
        cout<<ans<<endl;
    }
}