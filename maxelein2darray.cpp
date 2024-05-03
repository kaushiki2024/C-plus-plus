#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int a[4][2]={{76,81},{13,76},{82,91},{88,90}};
    int mx=INT_MIN;
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            mx=max(mx,a[i][j]);
        }
       
    }
     cout<<mx;
    
}

