#include<iostream>
int main(){
    int n;
    int i;
    std::cin>>n;
    for(i=n/2;i>1;i--){
        if(n%i==0){
            std::cout<<i;
            break;
            
        }
    }
}
