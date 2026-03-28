<#include<iostream>
#include<algorithm>
#include<vector> 
#include<string> 
int main (){
    auto lambda = []<typename t>(const std::vector<t>&v)
    {
        std::cout<<"le tableau contient "<< std::size(v) <<"elements \n";
    }
    ; lambda(std::vector<int> {1, 2, 3});
      lambda(std::vector<std::string> {"a", "b"});

    return 0;
}