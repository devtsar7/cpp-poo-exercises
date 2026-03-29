#include <iostream>
#include <string>
#include<stdexcept>
class etudiant {
    private :
    double note ;
    std::string nom ;
    public :
    etudiant(double n,std::string no):note(n),nom(no){
        if (note<0 || note>20){
            throw std::invalid_argument(" note invalid ")
        ;}
    }
    friend void afficher(etudiant e,etudiant ee);

};
void afficher(etudiant e1,etudiant e2){
    if (e1.note>e2.note){
        std::cout<<"l'eleve "<< e1.nom <<" est meilleur que l'eleve "<< e2.nom<<"\n";
    }else if (e2.note>e1.note){
        std::cout<<"l'eleve "<< e2.nom <<" est meilleur que l'eleve "<< e1.nom<<"\n";
    }else {
        std::cout << "Les deux etudiants ont le meme niveau\n";
    }
}
int main (){
    etudiant numero1(16,"nassim");
    etudiant numero2(15,"rayene");
    afficher(numero1,numero2);
    return 0 ;

}