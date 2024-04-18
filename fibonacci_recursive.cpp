//Write a function to calculate the nth fibonacci number using recursion
#include<iostream>
int fibonacci(int n){
 if(n==1||n==2) return 1;
 return fibonacci(n-1)+fibonacci(n-2);

}
int main(){
    int n;
    std::cin>>n;
    std::cout<<fibonacci(n);
    return 0;
}