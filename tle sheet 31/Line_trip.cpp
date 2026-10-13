#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int first;
        cin>>first;
        int edge1=first;
        int maxi=INT_MIN;
        for(int i=2;i<=n;i++){
            int last;
            cin>>last;
            maxi=max((last-first),maxi);
            first=last;
        }
        int edge2=2*(x-first);
        cout<<max({edge1,maxi,edge2})<<endl;
    }
}