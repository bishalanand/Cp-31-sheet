#include<iostream>
#include<string>
using namespace std;

bool valid(long long x){
    long long temp=x;
    while(temp>0){
        int d=temp%10;
        if(d!=0 && x%d!=0){
            return false;
        }
        temp/=10;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x;
        cin>>x;
        while(!valid(x)){
            x++;
        }
        cout<<x<<endl;
    }
}