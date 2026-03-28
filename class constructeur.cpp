#include <iostream>
#include  <cassert>
#include  <string>
class produit {
    private : 
    std::string nom ;
    double prix ;
    public :
    produit(std::string n , double p): nom(n),prix(p){
        assert (prix>=0)
    ;}
    bool estchere () {
        return prix<=100 ;
    }
    void afficheur(){
        std::cout<<"le nome de produit est "<<  nom   << " le prix est "<<   prix   <<"\n";
        if (estchere()){
            std::cout<<"le produit est chere"<<"\n";
            
        }
        else {
            std::cout<<"le produit n'est pas chere"<<"\n";

        }
       }
};
int main (){
    produit pro("dior",59);
    produit pro2("dove",102);
    pro.afficheur();
    pro2.afficheur();
    return 0;
}