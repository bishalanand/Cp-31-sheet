#include<iostream>
#include<set>
using namespace std;

int main(){
    set<long long>poweroftwo;
    long long power=1;
    for(int i=0;i<=64;i++){
        poweroftwo.insert(power);
        power*=2;
    }
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(poweroftwo.find(n)!=poweroftwo.end()){
            cout<<"No"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}