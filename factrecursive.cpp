#include<iostream>
int fact(int n){
    if(n==1){
        return 1;
    }
    return n+fact(n-1);
}
int main(){
    int n,z;
    std::cin>>n;
    std::cout<<fact(n);
}