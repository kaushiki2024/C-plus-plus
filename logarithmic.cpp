//power function(logarithmic)
#include<iostream>
int powerlog(int a,int b){
    if(b==0)  return 1;
    if(b%2==0){
    return powerlog(a,b/2)*powerlog(a,b/2);
    }
    else{
        return powerlog(a,b/2)*powerlog(a,b/2)*a;
    }
}

int main(){
    int a;
    std::cin>>a;
    int b;
    std::cin>>b;
    std::cout<<powerlog(a,b);
}
