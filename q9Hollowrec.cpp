#include<iostream>
int  main(){
    int i,j,n,m;
    std::cin>>n;
    std::cin>>m;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
          if(i==1||j==1||i==n||j==m){
            std::cout<<"* ";
          }
          else{
            std::cout<<"  ";
          }
        }
        std::cout<<"\n";
    }
}