#include<iostream>
int main(){
    int a[2][2];
    int b[2][2];
    int c[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            a[i][j]=10;
        }
        std::cout<<" ";
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            b[i][j]=10;
        }
        std::cout<<" ";
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
          c[i][j]=a[i][j]+b[i][j];
        }
        std::cout<<"\n";
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
          std::cout<<c[i][j]<<" ";
        }
        std::cout<<"\n";
    }
    
}