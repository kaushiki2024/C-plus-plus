#include<iostream>
int  main(){
    int i,j,n;
    std::cin>>n;
    int a=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            std::cout<<a<<" ";
        a++;
        }
       std::cout<<"\n"; 
    }
}