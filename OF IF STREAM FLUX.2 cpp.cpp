#include<iostream>
#include<fstream>
#include<stdexcept>
#include<string>
int main (){
    try{
std::ifstream texte("source.txt");
if (!texte){
 throw std::runtime_error("fichier introuvable");
}    
std::ofstream copie("copie.txt");
if(!copie){
    throw std::runtime_error("impossible de creer le fichier") ;
}
std:: string textee ;
while(std::getline(texte,textee)){
    copie<<textee<<"\n" ;
}
std::cout<<"fichier transfere avec succes";
texte.close();
copie.close();

}catch (std::exception &c){
    std::cerr<<"erreur :"<<c.what()<<"\n"; 
}
return 0 ;
}