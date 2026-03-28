#include <iostream>
//==== fanctions des exercices ====

//1. calcules basiques
void calculesbasiques () { 
    double a, b ;
    std::cout<<" entrez le premier nombre ";
    std::cin>> a ;
    std::cout<<" entrez le deuxieme nombre ";
    std::cin>> b ;
    std::cout<<" somme = "<< a + b <<std::endl;
    std::cout<<" difference = "<< a - b <<std::endl;
    std::cout<<" produit = "<< a * b <<std::endl;
    if (b !=0)
    { std::cout<<" qoutient = "<< a / b <<std::endl;
    } 
    else
    {
     std::cout<<" division par zero impossible "<<std::endl;
    }
}
    //2.verification de parite
void verificationdeparite () {
    int nombre ;
    std::cout<<" entrez un nombre ";
    std::cin>> nombre ;
    if (nombre %2 == 0){
    std::cout<<" votre numero est pair "<<std::endl;
    }
    else
    {
    std::cout<<" votre numero est impair "<<std::endl;
    }       
}  
    //3.conversion de temperatur
void conversiondetemperatur (){
    float celsius, fahrenheit ;
    std::cout<<" entrez la temperature en celsius ";
    std::cin>> celsius ;
    fahrenheit = celsius * 9/5 + 32 ;
    std::cout<<" temperature en fahrenheit "<< fahrenheit <<std::endl ;
} 
    //4.calcul de l'air d'un rectangle
void rectangle (){
    float longueur, largeur ;
    std::cout<<"entrez la longueur";
    std::cin>> longueur ;
    std::cout<<"entrez la largeur";
    std::cin>> largeur ;
    std::cout<<" aire = "<< longueur * largeur <<std::endl;
}
    //5.verification de la majorite
void majorite (){
    int age; 
    std::cout<<" veillez saisir votre age ";    
    std::cin>> age ;
    if (age >=18)
    {
        std::cout<<" vous etes majeur "<<std::endl;
    
    }else {
        if 
        std::cout<<"vous etes mineur"<<std::endl;
    }
}
int main () {
int choix ;
char continuez;

do{
    std::cout<<" ===== MENU DES EXERCICES ===== "<<std::endl;
    std::cout<<" 1. calcules basiques "<<std::endl;
    std::cout<<" 2. verification de parite "<<std::endl;
    std::cout<<" 3.convertion de temperature "<<std::endl;
    std::cout<<" 4.calcul de l'aire d'un rectangle "<<std::endl;
    std::cout<<" 5.verification de la majorite "<<std::endl;
    std::cout<<" 6.quitter"<<std::endl;
    
    std::cout<<"entrez votre choix";
    std::cin>>choix ;
    
    switch (choix)
    {
    
        case 1 : calculesbasiques ();break;
        case 2 : verificationdeparite ();break;
        case 3 : conversiondetemperatur ();break;
        case 4 : rectangle ();break; 
        case 5 : majorite ();break;
        case 6 :
            std::cout<<"merci d'avoir utilise le programme"<<std::endl;
            return 0 ;
        default:
         std::cout<<" choix invalide "<<std::endl;
    } 
       std::cout<<"voulez vous continuez ? o/n";
       std::cin>> continuez; 

}while (continuez == 'o' || continuez == 'O');
    std::cout<<"programme termine au revoir "<<std::endl;

return 0 ;
}
