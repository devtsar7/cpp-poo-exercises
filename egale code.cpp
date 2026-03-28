#include <iostream>
int main () {
    int t[10], a, b ;
    for (a=0 ; a<10 ; a++){
        std::cout<<"entrez les valeur "<<a+1<<std::endl;
        std::cin>>t[a];
    }
    for (a=0 ; a<10 ; a++) {
        std::cout<<"entrez la valeur de entier "<<b<<std::endl;
        std::cin>>b ;
        if (b==t[a]){
            std::cout<<"la valeur de entier est egale "<<b<<std::endl;
        }
            else {
            std::cout<<"la valeurr de entier n'est pas egale "<<std::endl;
            }
        }
    return 0 ;
    }
    