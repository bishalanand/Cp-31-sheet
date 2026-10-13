#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;
        if(x!=1){
            cout<<"Yes"<<endl;
            cout<<n<<endl;
            for(int i=0;i<n;i++){
                cout<<1<<" ";
            }cout<<endl;
        }
        else{
            if(x==1 && k==1){
                cout<<"NO"<<endl;
            }
            else if(n%2==0){
                int ans=n/2;
                cout<<"yes"<<endl;
                cout<<ans<<endl;
                for(int i=1;i<=ans;i++){
                    cout<<2<<" ";
                }cout<<endl;
            }
            else if(n%2!=0 ){
                if(k<=2){
                    cout<<"NO"<<endl;
                }
                else{
                    int ans=n/2;
                    cout<<"Yes"<<endl;
                    cout<<ans<<endl;
                    for(int i=1;i<ans;i++){
                        cout<<2<<" ";
                    }
                    cout<<3<<endl;
                }
            }
        }
    }
}