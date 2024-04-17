#include<iostream>
int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int combination(int x,int r){
    int a= fact(x);
    int b=fact(r);
    int c=fact(x-r);
    return a/(b*c);

}
int main(){
    int n,i,j;
    std::cin>>n;
    for(i=0;i<=n;i++){
        for(j=0;j<=i;j++){
            std::cout<<combination(i,j)<<" ";
        }
        std::cout<<"\n";

    }

}