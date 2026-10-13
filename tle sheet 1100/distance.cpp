#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,a,b;
        cin>>n>>k>>a>>b;
        vector<pair<long long,long long>>points;
        for(int i=0;i<n;i++){
            long long x,y;
            cin>>x>>y;
            points.push_back({x,y});
        }
        long long absdi=abs(points[a-1].first-points[b-1].first)+abs(points[a-1].second-points[b-1].second);
        long long minia=LLONG_MAX;
        long long minib=LLONG_MAX;
        for(int i=0;i<k;i++){
            minia=min(minia,abs(points[i].first-points[a-1].first)+abs(points[i].second-points[a-1].second));
            minib=min(minib,abs(points[i].first-points[b-1].first)+abs(points[i].second-points[b-1].second));
        }
        if(minia==LLONG_MAX || minib==LLONG_MAX){
            cout<<absdi<<endl;
        }
        else{
            cout<<min(absdi,minia+minib)<<endl;
        }

    }
}