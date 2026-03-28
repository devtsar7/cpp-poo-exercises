#include  <iostream>
#include  <fstream>
#include <string>
#include <stdexcept>
int main () {

try {
    std::ofstream fichier("premier texte.txt") ;
if (!fichier){
   throw std::runtime_error("erreur : fichier introuvable ");
    return 1 ;
}

std::string texte ;
std::cout<<"entrer le texte que vous voulez ecrire   ";
std::getline(std::cin,texte);
fichier<<texte<<"\n";
fichier.close();

std::ifstream sortiefichier("premier texte.txt");
if (!sortiefichier){
  throw  std::runtime_error("impossible de trouver le fichier ");
    return 1 ;
}
std::string line ;
while (std::getline(sortiefichier,line)){
    std::cout<<line<<"\n";
}
sortiefichier.close();
}catch (const std::exception &c){
    std::cerr<<"erreur :"<<c.what()<<"\n";
}
return 0 ;
}