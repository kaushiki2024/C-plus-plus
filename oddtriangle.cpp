#include<iostream>
int main(){
    int i,j,n;
    std::cin>>n;
    for(i=1;i<=n;i++){
        int a=1;
        for(j=1;j<=i;j++){
            std::cout<<a<<" ";//2*j-1
            a+=2;
        }
        std::cout<<"\n";
    }
}