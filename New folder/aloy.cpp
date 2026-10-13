#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
        int n;
        cin>>n;
        long long h;
        cin>>h;
        vector<long long>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int ans=1;
        int l=0;
        int r=n-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            vector<int>temp;
            for(int i=0;i<=mid;i++){
                temp.push_back(a[i]);
            }
            sort(temp.begin(),temp.end());
            int p=temp.size()-1;
            long long botalus=0;
            while(p>=0){
                botalus+=temp[p];
                p-=2;
                if(botalus>h){
                    break;
                }
            }
            if(botalus>h){
                r=mid-1;
            }
            else{
                ans=mid+1;
                l=mid+1;
            }
        }
        cout<<ans<<endl;

}