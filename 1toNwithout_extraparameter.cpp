#include<iostream>
void rec(int n){
    if(n==0) return;
    rec(n-1);
    std::cout<<n<<"\n";
}
 int main(){
    int n;
    std::cout<<"enter  n:";
    std::cin>>n;
    std::cout<<"\n";
    rec(n);
 }