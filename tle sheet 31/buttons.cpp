#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        long long first1=(c+1)/2;
        long long second=c/2;
        long long A=a+first1;
        long long B=b+second;
        if(A>B){
            cout<<"First"<<endl;
        }
        else{
            cout<<"Second"<<endl;
        }
    }
    return 0;
}