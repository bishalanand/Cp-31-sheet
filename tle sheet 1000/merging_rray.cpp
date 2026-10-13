#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n), b(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
        }
        int count1=0;
        int count2=0;
        int a1=-1,b1=-1;
        int i=0,j=0;
        int maxcount=-1;
        while(i<n && j<n){
            if(a[i]==b[j]){
                if(a1==a[i]){
                    count1+=2;
                    i++;
                    j++;
                }
                else if(b1==b[j]){
                    count2+=2;
                    i++;
                    j++;
                }
            }
            else if(a[i]==a1){
                count1++;
                i++;
            }
            else if(b[j]==b1){
                count2++;
                j++;
            }
            else{
                a1=a[i];
                b1=b[j];
                count1=1;
                count2=1;
                i++;
                j++;
            }
            maxcount=max(maxcount, max(count1,count2));
        }
        cout<<maxcount<<endl;
    }
}