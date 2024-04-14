#include<iostream>
int main(){
    int i,j,n;
    std::cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            std::cout<<" ";
        }
        for(j=1;j<=i;j++){
            std::cout<<j;
        }
        std::cout<<"\n";
    }
}