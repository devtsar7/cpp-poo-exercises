#include <iostream>
int main (){
int t[10], max ,a ;
for (a=0 ;a<10 ; a++){
    std::cout<<"entrez la valeur de tableaux "<<a+1<<std::endl;
    std::cin>>t[a] ;
}
    max=t[0] ;
    for (a=0 ;a<10 ; a++){
        if (max<t[a]) {
            max = t[a] ;
        }
    }
        std::cout<<"la valeur maximal est "<<max<<std::endl;
   return 0 ;      
        
}

