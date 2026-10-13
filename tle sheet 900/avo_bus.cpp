#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long maxi=-1;
        if(n>=4 && (n%4==0 || n%4==2)){
            maxi=n/4;
        }
        long long mini=-1;
        if(n >= 4 && n % 2 == 0){
            if(n % 6 == 0){
                mini = n / 6;
            }
            else if(n % 6 == 2 || n % 6 == 4){
                mini = (n / 6) + 1;
            }
        }
        if(maxi!=-1 && mini!=-1){
            cout<<mini<<" "<<maxi<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}