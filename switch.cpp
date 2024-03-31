#include<iostream>
int main(){
    int a;
    std::cin>>a;
    char op;
    std::cin>>op;
    int b;
    std::cin>>b;
    switch(op){
        case '+':
           std::cout<<a+b;
           break;
        case '-':
            std::cout<<a-b;
            break;
        case '*':
            std::cout<<a*b;
            break;
        case '/':
            std::cout<<a/b;
            break;
        default:
           std::cout<<"invalid operator";    
    }

}