#include<iostream>
//reverse of a given number
int main(){
    int r=0;
    int n;
    int l;
    std::cin>>n;
    while(n>0){
        l=n%10;
        r=r*10;
        r=r+l;
        n=n/10;
    }
    std::cout<<r;
}