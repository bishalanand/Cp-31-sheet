#include<iostream>
#include<climits>
#include<stdlib.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int small=INT_MAX;
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        if(abs(c)<small){
            small=abs(c);
        }
    }
    cout<<small;
    return 0;
}