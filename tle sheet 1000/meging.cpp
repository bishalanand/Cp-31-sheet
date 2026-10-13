#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int i=0,j=0;
        int last=-1;
        int globalmax=INT_MIN;
        int count=0;
        while (i<n-1 && j<n-1)
        {
          if(a[i]==b[j] && last==a[i]){
            count+=2;
            i++;
            j++;
          }
          else if(a[i]==last){
            count++;
            i++;
          }
        }
        
    }
}