#include<iostream>
int main(){
    int a[]={12,6,7,34,9,230,2,8};
    int n =sizeof(a)/4;
    int b[n];
    for(int i=0;i<n;i++){
        int j=n-1-i;
        b[i] =a[j];
        std::cout<<b[i]<<" "; 
    }
}