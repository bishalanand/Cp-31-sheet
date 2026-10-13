#include<iostream>
#include<stack>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ansi=0;
        stack<char>sh;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                sh.push(s[i]);
            }
            else{
                if(!sh.empty()){
                    sh.pop();
                }
                else{
                    ansi++;
                }
            }
        }
        ansi+=sh.size();
        cout<<ansi/2<<endl;
    }
}