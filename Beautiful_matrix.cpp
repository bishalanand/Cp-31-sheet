#include <iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
    int row,col;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            int a;
            cin>>a;
            if(a==1){
                row=i;
                col=j;
            }
        }
    }
    cout<<(abs(2-row)+abs(2-col))<<endl;
    return 0;
}