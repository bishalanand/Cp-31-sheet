#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool hai=false;
        if(n<3){
            hai=true;
            for(int i=0;i<n;i++){
                int num;
                cin>>num;
            }
        }
        else if(n==3){
            int a,b,c;
            cin>>a>>b>>c;
            if(a==b || b==c || a==c)hai=true;
            else{
                hai=false;
            }
        }
        else{
            if(n%2==0){
                int prev1=-1;
                int prev2=-1;
                hai=true;
                for(int i=0;i<n;i++){
                    int num;
                    cin>>num;
                    if(prev1==-1){
                        prev1=num;
                    }
                    else if(prev2==-1 && num!=prev1){
                        prev2=num;
                    }
                    else if(prev1!=num && prev2!=num){
                        hai=false;
                    }
                }
            }
            else{
                for(int i=0;i<n;i++){
                    int num;
                    cin>>num;
                }
            }
        }
        if(hai){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}