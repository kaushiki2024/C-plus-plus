#include<iostream>
int main(){
    int i,j,n;
    std::cin>>n;
    for(i=1;i<n;i++){
        for(j=1;j<n;j++){
            int j=i;
            std::cout<<(char)(j+64)<<" ";
           
        }
         std::cout<<"\n";
    }
}

