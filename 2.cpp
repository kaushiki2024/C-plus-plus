//Take input from user and tell whether number is odd or even
#include<iostream>
int main(){
    int n;
    std::cout<<"enter the number:";
    std::cin>>n;
    if(n%2==0){
        std::cout<<"even number";
    }
    else{
        std::cout<<"odd number";
    }
    return 0;
}