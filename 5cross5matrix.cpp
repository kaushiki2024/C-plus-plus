#include<iostream>
int main(){
    int  a[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            a[i][j]=10;
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            std::cout<<a[i][j]<<" ";
        }
        std::cout<<"\n";
    }
}