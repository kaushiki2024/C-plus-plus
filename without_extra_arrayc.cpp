#include<iostream>
int main(){
    int a[]={1,2,3,4};
    int n=sizeof(a)/4;
    int i=0;
    int j=n-1;
    while(i<j){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    std::cout<<"\n";
    for(i=0;i<=n-1;i++){
        std::cout<<a[i]<<" ";
    }
}