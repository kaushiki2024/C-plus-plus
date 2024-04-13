#include<iostream>
int main(){
    int i,j,n;
    std::cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(i%2==0){
                std::cout<<char(j+64);
            }
            else{
                std::cout<<char(j+48);
            }
        }
        std::cout<<"\n";
    }
}