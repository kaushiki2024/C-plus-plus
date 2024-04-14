#include<iostream>
int main(){
        int i,j,n;
        std::cin>>n;
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
              if(i==j||(i+j)==n+1)
                std::cout<<"* ";
              else
                std::cout<<"  ";  
            }
            std::cout<<"\n";
        }
    }
