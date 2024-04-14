#include<iostream>
int main(){
    int i,j,n;
    std::cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==3||j==3){
                std::cout<<"*";

            }
            else{
                std::cout<<" ";
            }
        }
        std::cout<<"\n";
    }
}