//count the number of vowels in a string
#include<iostream>
int main(){
    std::string s;
    std::getline(std::cin,s);
    int count=0;
    for(int i=0;i<s.length();i++){ 
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
        count++;
    }
    }
    std::cout<<count;
}