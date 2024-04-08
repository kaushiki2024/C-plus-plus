#include<iostream>
int main(){
     int i,j,n;
     std::cin>>n;
     for( i=1;i<=n;i++){
        for(j=1;j<n;j++){
            std::cout<<"*";
            std::cout<<"\n";
        }
     }
}