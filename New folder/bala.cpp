#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    vector<bool>complete(n+1,false);
    vector<bool>overtake(n+1,false);
    int i1=0,i2=0;
    while(i1<n && i2<n){
        if(complete[a[i1]]){
            i1++;
        }
        else if(a[i1]==b[i2]){
            complete[a[i1]]=true;
            i1++;
            i2++;
        }
        else{
            overtake[b[i2]]=true;
            complete[b[i2]]=true;
            i2++;
        }
    }
    int count=0;
    for(auto i:overtake){
        if(i)count++;
    }
    cout<<count<<endl;
}