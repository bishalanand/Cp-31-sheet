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
        vector<long long>a(n);
        bool negative=false;
        long long tsum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<0){
                negative=true;
            }
            tsum+=a[i];
        }
        long long maxsum=LLONG_MIN;
        int mainc=0;
        int count=0;
        long long sum=0;
        for(int i=0;i<n-1;i++){
            sum+=a[i];
            count++;
            maxsum=max(maxsum,sum);
            mainc=max(mainc,count);
            if(sum<0){
                sum=0;
                count=0;
            }
        }
        sum=0;
        count=0;
        for(int i=1;i<n;i++){
            sum+=a[i];
            count++;
            maxsum=max(maxsum,sum);
            mainc=max(mainc,count);
            if(sum<0){
                sum=0;
                count=0;
            }
        }
        if(tsum>maxsum){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}