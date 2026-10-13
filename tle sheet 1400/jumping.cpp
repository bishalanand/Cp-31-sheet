#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>>a;
        int l=0;
        int h=1e9;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            a.push_back({x,y});
        }
        int ans=h;
        while(l<=h){
            int mid=l+(h-l)/2;
            int low=0;
            int high=0;
            bool hai=true;
            for(int i=0;i<n;i++){
                vector<pair<int,int>>dekh;
                low=max(a[i].first, low-mid);
                high=min(a[i].second, high+mid);

                if(low>high){
                    hai=false;
                    break;
                }
            }

            if(hai){
                ans=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        cout<<ans<<endl;
    }
}