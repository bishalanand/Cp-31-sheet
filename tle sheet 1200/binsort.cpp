#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(a[n-1]<a[n-2]){
            cout<<-1<<endl;
        }
        else if(a[n-1]<0 && a[n-2]<0){
            bool milla=false;
            for(int i=0;i<n-1;i++){
                if(a[i+1]<a[i]){
                    milla=true;
                    cout<<"-1"<<endl;
                    break;
                }
            }
            if(!milla){
                cout<<"0"<<endl;
            }
        }
        else{
            cout<<n-2<<endl;
            for(int i=0;i<n-2;i++){
                cout<<i+1<<" "<<n-1<<" "<<n<<endl;
            }

        }
    }
}