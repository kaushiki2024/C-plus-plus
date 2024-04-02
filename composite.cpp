#include<iostream>
int  main(){
   int n;
   std::cout<<"enter n";
   std::cin>>n;
   bool flag=true;
   for(int i=2;i<=n/2;i++){
      if(n%i==0){
        //std:: cout<<"composite";
        flag=false;
        break;
      }
   }
   if(n==1){
      std::cout<<"neither prime nor composite";
   }
   else if(flag==true){
      std::cout<<"prime number";

   }
   else{
      std::cout<<"composite";
   }
}

