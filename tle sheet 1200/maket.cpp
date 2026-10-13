#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char c;
        cin>>c;
        string s;
        cin>>s;
        int count=0;
        bool od=false;
        bool ev=false;
        for(int i=0;i<n;i++){
            if(s[i]!=c){
                count++;
                if((i+1)%2==0){
                    ev=true;
                }
                else{
                    od=true;
                }
            }
        }
        if(count==0){
            cout<<0<<endl;
        }
        else if(s[n-1]==c){
            cout<<1<<endl;
            cout<<n<<endl;
        }
        else{
            if(!ev){
                cout<<1<<endl;
                cout<<2<<endl;
            }
            else{
                int i=n;
                int count=0;
                while(i-1>=0 && s[i-1]!=c){
                    i--;
                    count++;
                }
                if(count<i){
                    cout<<1<<endl;
                    cout<<i<<endl;
                }
                else{
                    cout<<2<<endl;
                    cout<<n<<" "<<n-1<<endl;
                }
            }

        }
    }
}