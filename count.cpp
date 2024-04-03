#include<iostream>
int main(){
    int n;
    std::cin>>n;
    int pro=1;
    while(n>0){
        pro=pro*(n%10);
        n=n/10;
    } 
   std::cout<<pro;    
}