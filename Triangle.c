//forme. Cpp
#include <iostream>
#include <cmath> // pour utiliser la constante M_PI et la fonction sqrt

using namespace std;

// Classe Triangle
class Triangle {
public:
    double base, hauteur;
    
    Triangle(double b, double h) : base(b), hauteur(h) {}

    double calculerSurface() {
        return (base * hauteur) / 2;
    }
    
    double calculerPerimetre(double cote1, double cote2) {
        return cote1 + cote2 + base;
    }
};

// Classe Rectangle
class Rectangle {
public:
    double longueur, largeur;
    
    Rectangle(double l, double w) : longueur(l), largeur(w) {}

    double calculerSurface() {
        return longueur * largeur;
    }

    double calculerPerimetre() {
        return 2 * (longueur + largeur);
    }
};

// Classe Cercle
class Cercle {
public:
    double rayon;
    
    Cercle(double r) : rayon(r) {}

    double calculerSurface() {
        return M_PI * rayon * rayon;
    }

    double calculerPerimetre() {
        return 2 * M_PI * rayon;
    }
};

int main() {
    // Triangle
    double base = 5.0, hauteur = 3.0, cote1 = 4.0, cote2 = 4.0;
    Triangle triangle(base, hauteur);
    cout << "Surface du triangle : " << triangle.calculerSurface() << endl;
    cout << "Perimetre du triangle : " << triangle.calculerPerimetre(cote1, cote2) << endl;

    // Rectangle
    double longueur = 7.0, largeur = 4.0;
    Rectangle rectangle(longueur, largeur);
    cout << "Surface du rectangle : " << rectangle.calculerSurface() << endl;
    cout << "Perimetre du rectangle : " << rectangle.calculerPerimetre() << endl;

    // Cercle
    double rayon = 6.0;
    Cercle cercle(rayon);
    cout << "Surface du cercle : " << cercle.calculerSurface() << endl;
    cout << "Perimetre du cercle : " << cercle.calculerPerimetre() << endl;

    return 0;
}


    