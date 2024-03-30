//Take integer input and print absolute value of the integer
#include<iostream>
int main(){
    int n;
    std::cout<<"enter the number:";
    std::cin>>n;
    if(n<0){
        n=-(n);
        std::cout<<n;
    }
    else{
        std::cout<<n;
    }
    return 0;
}