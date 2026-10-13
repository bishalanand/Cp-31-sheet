#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        long long maxi=0;
        long long sum=0;
        for(int i=0;i<n;i++){
            long long y;
            cin>>y;
            maxi+=(y+x-1)/x;
            sum+=y;
        }
        long long mini=(sum+x-1)/x;
        cout<<mini<<" "<<maxi<<endl;
    }
}
