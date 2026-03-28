#include <iostream>
int main()
{
    int choix;
    char continuer;
    do
    {
        // AFFICHAGE DES CHOIX
        std::cout << " affichage des choix " << std::endl;
        std::cout << "1. Calculs basiques" << std::endl;
        std::cout << "2. Verification de parite " << std::endl;
        std::cout << "3. Conversion de temperature " << std::endl;
        std::cout << "veillez enter votre choix" << std::endl;
        std::cin >> choix;

        // ===== TRAITEMENT DES CHOIX =====

        switch (choix)
        {
        case 1:
        {
            double a, b;
            std::cout << "entrez le premier nombre : ";
            std::cin >> a;
            std::cout << "entrez le deuxieume nombre : ";
            std::cin >> b;
            std::cout << "la somme =" << a + b << std::endl;
            std::cout << "la difference=" << a - b << std::endl;
            std::cout << "le produit=" << a * b << std::endl;
            std::cout << "le qoutient=" << a / b << std::endl;
            break;
        }
        case 2:
        {
            int nombre;
            std::cout << "ecrire un nombre:";
            std::cin >> nombre;
            if (nombre % 2 == 0)
            {
                std::cout << nombre << " pair " << std::endl;
            }
            else
            {
                std::cout << nombre << " impair" << std::endl;
            }

            break;
        }
        case 3:
        {
            float celsius, Fahrenheit;
            std::cout << "entrez la temperature en celsius : ";
            std::cin >> celsius;
            Fahrenheit = celsius * 9 / 5 + 32.;
            std::cout << "la temperature de Fahrenheit: " << Fahrenheit << std::endl;
            break;
        }
        }
        // demande si l'utilisateur veut continuer oui ou nn
        std::cout << "voulez vous continuer o/n ? " << std::endl;
        std::cin >> continuer;

    } while (continuer == 'o' || continuer == 'O');
    std::cout << "vous avez quittez le programme" << std::endl;

    return 0;
}