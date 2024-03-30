#include<iostream>
int  main(){
    int n;
    std::cout<<"enter the three digit number you want";
    std::cin>>n;
    if(n>99 && n<100){  // "and" could also be used
        std::cout<<"three digit number";

    }
    else{
        std::cout<<"not a three digit number";
    }
    return 0;
}