#include<iostream>
int main(){
    int i,j,n;
    std::cout<<"enter the value of n";
    std::cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            std::cout<<j<<" ";
        }
        std::cout<<"\n";
    }
}