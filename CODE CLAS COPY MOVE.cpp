#include<iostream>
#include<cassert>
#include<string>
class voiture {
    private :
    std::string marque ;
    double prix ;
    public :
    voiture(std::string m , double p): marque(m),prix(p){
     assert (prix>0)
    ;}
    voiture(voiture const & other ):marque(other.marque),prix(other.prix){
         std::cout<<"constructeur copy"<<"\n";
   ; }
    voiture(voiture const && other): marque(std::move(other.marque)),prix(std::move(other.prix)){
            std::cout << "Move constructor\n";
    ;}
    void afficher(){
          std::cout<<"la marque de la voitures est "<< marque <<"  et le prix de la voiture est "<< prix << "\n";
    }
    
};
int main (){
    voiture v1("Tesla", 50000);
    voiture v2= v1 ;
    voiture v3 = std::move(v1);
    v2.afficher();
    v3.afficher();
    return 0 ;
}