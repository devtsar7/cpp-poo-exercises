#include <iostream>
#include <cmath>
int main()

{
    double m;
    double c;
    double t;
    double taux_annuel;
    int n;
    int N;

    std::cout << "entrez le montant de capital emprinte ";
    std::cin >> c;
    std::cout << "entrez le nombre d'annees ";
    std::cin >> n;
    std::cout << "entrez le taux annuel ";
    std::cin >> taux_annuel;
    
    t = taux_annuel / 100 / 12;
    N = n * 12;
    m = c * t * pow(1 + t, N) / (pow(1 + t, N) - 1);
    std::cout << "la mensualite de credit immobillier = " << m << std::endl;

    return 0;
}