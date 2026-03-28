#include <iostream>
#include <string>
#include <cctype>
#include <stdexcept>
#include <fstream>
int main (){
    try{
    std::ifstream texte("copie.txt");
if (!texte){
    throw std::runtime_error("fichier introuvable"); 
}
    std::ofstream copie("copie2.txt");
if (!copie){
    throw std::runtime_error("fichier impossible a creer");
}
    std::string textee ;
    while (std::getline (texte,textee)){
    for (char &c : textee){
        c = std::toupper(static_cast<unsigned char> (c));
    }
    copie<<textee<<"\n";
}

std::cout<<"fichier transfere avec succes";
copie.close();
texte.close();
}catch (std::exception const &c){
    std::cout<<"erreur :"<<c.what()<<"\n";
}
return 0 ;
} 