#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<cstdlib>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }vector<int> idx(n);
        for(int i = 0; i < n; i++) idx[i] = i;

        sort(idx.begin(), idx.end(), [&](int i, int j){
            return nums[i] < nums[j];
        });
        vector<int>ansi(n+1);
        ansi[0]=1;
        bool add=true;
        int k=1;
        for(int i=n-1;i>=0;i--){
            int posi=idx[i];
            if(add){
                ansi[posi+1]=k+1;
            }
            else{
                ansi[posi+1]=1-k;
                k++;
            }
            add=!add;
        }
        long long T=0;
        for(int i=0;i<n;i++){
            T+=1LL*abs(ansi[i+1]-ansi[0])*2*nums[i];
        }
        cout<<T<<endl;
        for(int i=0;i<=n;i++){
            cout<<ansi[i]<<" ";
        }cout<<endl;
    }
}