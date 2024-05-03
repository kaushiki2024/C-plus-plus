#include<iostream>
int main(){
    int a[4][2]={{76,81},{13,76},{82,91},{88,90}};
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            std::cout<<a[i][j]<<" ";
        }
        std::cout<<"\n";
    }
    
}

