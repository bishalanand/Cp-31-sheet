#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool hai=false;
        vector<int>num;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==1 || x==2){
                hai=true;
            }
            num.push_back(x);
        }
        if(hai){
            cout<<"YES"<<endl;
            continue;
        }
        int nums=num[0];
        for(int i=1;i<n;i++){
            nums=gcd(nums,num[i]);
            if(nums<=2){
                break;
            }
        }
        if(nums<=2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}