#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int maxi;
        cin>>maxi;
        for(int i=1;i<n;i++){
            int x;
            cin>>x;
            maxi=maxi&x;
        }
        cout<<maxi<<endl;
    }
}