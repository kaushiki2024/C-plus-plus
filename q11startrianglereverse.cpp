#include<iostream>
int main(){
    int i,j,m;
    std::cin>>m;
    for(i=1;i<=m;i++){//rows
       for(j=1;j<=m-i;j++){//spaces
           std::cout<<"  ";
       }
       for(j=1;j<=i;j++){
        std::cout<<"* ";
       }
       std::cout<<"\n";

    }
}

